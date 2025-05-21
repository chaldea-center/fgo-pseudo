void __fastcall UserServantGrandInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B45EAD & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, v1);
    byte_4B45EAD = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(UserServantGrandInfo_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantGrandInfo_TypeInfo->static_fields->Empty = (struct UserServantGrandInfo_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)UserServantGrandInfo_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserServantGrandInfo___ctor(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantGrandInfo___ctor_42491180(
        UserServantGrandInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  int64_t Entity; // x0
  __int64 v18; // x1
  int64_t v19; // x22
  Il2CppObject *v20; // x0
  __int128 v21; // q0
  __int128 v22; // q1
  UserServantGrandMaster_o *v23; // x20
  struct GrandGraphDetailEntity_o *EntityByBaseClassId; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B45EA9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, userSvtEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B45EA9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v15;
    *(_QWORD *)&v29.fields.fakeValue = v14;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v29, 0LL);
    if ( v16 )
    {
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v16,
                          Entity,
                          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity )
      {
        v19 = Entity;
        if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
          return;
        if ( !notCheckUserServantGrand )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v20 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
          v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v23 = (UserServantGrandMaster_o *)v20;
          *(_OWORD *)&v28.fields.currentCryptoKey = v21;
          *(_OWORD *)&v28.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v28;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v27, 0LL);
          if ( !v23 )
            goto LABEL_23;
          if ( !UserServantGrandMaster__GetFirstByUserSvtId(v23, Entity, 0LL) )
            return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          EntityByBaseClassId = GrandGraphDetailMaster__GetEntityByBaseClassId(
                                  (GrandGraphDetailMaster_o *)Entity,
                                  *(_DWORD *)(v19 + 80),
                                  1,
                                  0LL);
          this->fields.svtGrandDetailEntity = EntityByBaseClassId;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)EntityByBaseClassId, v25, v26);
          return;
        }
      }
    }
LABEL_23:
    sub_1BDBAD4(Entity, v18);
  }
}


void __fastcall UserServantGrandInfo___ctor_42491688(
        UserServantGrandInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  struct GrandGraphDetailEntity_o *EntityByBaseClassId; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B45EAA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, servantLeaderInfo);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B45EAA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( servantLeaderInfo && ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v11;
    *(_QWORD *)&v19.fields.fakeValue = v10;
    Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v19, 0LL);
    if ( !v12 )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Entity,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_17;
    v15 = Entity;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Entity = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( Entity )
      {
        EntityByBaseClassId = GrandGraphDetailMaster__GetEntityByBaseClassId(
                                (GrandGraphDetailMaster_o *)Entity,
                                (int32_t)v15[5].klass,
                                1,
                                0LL);
        this->fields.svtGrandDetailEntity = EntityByBaseClassId;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)EntityByBaseClassId, v17, v18);
        return;
      }
LABEL_17:
      sub_1BDBAD4(Entity, v14);
    }
  }
}


bool __fastcall UserServantGrandInfo__IsValid(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtGrandDetailEntity != 0LL;
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandInfo_o *__fastcall UserServantGrandInfo__Make(
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v5; // x0
  UserServantGrandInfo_o *Empty; // x21
  const MethodInfo *v7; // x3
  UserServantGrandInfo_c *v8; // x0

  if ( (byte_4B45EAB & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, notCheckUserServantGrand);
    byte_4B45EAB = 1;
  }
  v5 = UserServantGrandInfo_TypeInfo;
  if ( userSvtEntity )
  {
    Empty = (UserServantGrandInfo_o *)sub_1BDBAC4(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_42491180(Empty, userSvtEntity, notCheckUserServantGrand, v7);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1BDBAD4(v5, notCheckUserServantGrand);
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


UserServantGrandInfo_o *__fastcall UserServantGrandInfo__Make_42492240(
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v3; // x0
  UserServantGrandInfo_o *Empty; // x20
  const MethodInfo *v5; // x2
  UserServantGrandInfo_c *v6; // x0

  if ( (byte_4B45EAC & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, method);
    byte_4B45EAC = 1;
  }
  v3 = UserServantGrandInfo_TypeInfo;
  if ( servantLeaderInfo )
  {
    Empty = (UserServantGrandInfo_o *)sub_1BDBAC4(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_42491688(Empty, servantLeaderInfo, v5);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1BDBAD4(v3, method);
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


int32_t __fastcall UserServantGrandInfo__get_AddedAtk(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  svtGrandDetailEntity = this->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    return svtGrandDetailEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall UserServantGrandInfo__get_AddedHp(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  svtGrandDetailEntity = this->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    return svtGrandDetailEntity->fields.adjustHp;
  else
    return 0;
}