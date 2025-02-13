void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDA832 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_23174/*"raid_boss_icon_"*/);
    byte_4BDA832 = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23174/*"raid_boss_icon_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_23174/*"raid_boss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall TitleInfoEventRaidBossOldComponent___ctor(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaidBossOldComponent__Destroy(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoEventRaidBossOldComponent_o *v8; // x19
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  il2cpp_array_size_t v11; // w23
  __int64 v12; // x24
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *gameObject; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct TitleInfoEventRaidDayComponent_array *v21; // x8
  PartyOrganizationUtility_c *v22; // x8
  PartyOrganizationUtility_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v25; // w21
  __int64 v26; // x23
  unsigned int namespaze; // w9
  UnityEngine_Object_o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  PartyOrganizationUtility_c *klass; // x8

  v8 = this;
  if ( (byte_4BDA830 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA830 = 1;
  }
  p_raidDayComponents = &v8->fields.raidDayComponents;
  raidDayComponents = v8->fields.raidDayComponents;
  if ( raidDayComponents )
  {
    v11 = 0;
    v12 = 32LL;
    while ( 1 )
    {
      max_length = raidDayComponents->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&raidDayComponents->obj.klass + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        v21 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v11 >= v21->max_length )
LABEL_28:
            sub_1C2209C(this, method);
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v21 + v12), 0LL, v15, v16, v17, v18, v19, v20);
          raidDayComponents = *p_raidDayComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1C22094(this, method);
    }
    *p_raidDayComponents = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.raidDayComponents, 0LL, v2, v3, v4, v5, v6, v7);
  }
  raidHpComponents = v8->fields.raidHpComponents;
  p_raidHpComponents = (PartyOrganizationUtility_o *)&v8->fields.raidHpComponents;
  v22 = (PartyOrganizationUtility_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v25 = 0;
    v26 = 32LL;
    while ( 1 )
    {
      namespaze = (unsigned int)v22->_1.namespaze;
      if ( (int)v25 >= (int)namespaze )
        break;
      if ( v25 >= namespaze )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&v22->_1.image + v26);
      if ( this )
      {
        v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v28, 0LL);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)klass + v26), 0LL, v29, v30, v31, v32, v33, v34);
          v22 = p_raidHpComponents->klass;
          ++v25;
          v26 += 8LL;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0LL;
    sub_1C21DDC(p_raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


bool __fastcall TitleInfoEventRaidBossOldComponent__IsDispPossible(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaidBossOldComponent__IsEventRaidBoss(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossOldComponent__Setup(
        TitleInfoEventRaidBossOldComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *titleInfoEventRaidDayObjs; // x8
  struct TitleInfoEventRaidDayComponent_array *v8; // x0
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v17; // x22
  __int64 v18; // x24
  unsigned __int64 v19; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  int64_t v21; // x21
  struct UnityEngine_GameObject_array *v22; // x8
  unsigned int *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  EventRaidMaster_c *v30; // x0
  struct TitleInfoEventRaidHpComponent_array *v31; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v40; // x29
  __int64 v41; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  int64_t v43; // x22
  UnityEngine_GameObject_o *v44; // x23
  System_String_o *name; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  TitleInfoEventRaidHpComponent_c *v48; // x0
  unsigned int *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  TitleInfoEventRaidHpComponent_c *v56; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v58; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDA82F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&EventRaidMaster_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TitleInfoEventRaidDayComponent___TypeInfo);
    sub_1C21E38(&TitleInfoEventRaidHpComponent___TypeInfo);
    sub_1C21E38(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_4BDA82F = 1;
  }
  v60 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v8 = (struct TitleInfoEventRaidDayComponent_array *)sub_1C21EE0(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        titleInfoEventRaidDayObjs->max_length);
  this->fields.raidDayComponents = v8;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.raidDayComponents, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v17 = 4LL;
  v18 = 8LL;
  while ( 1 )
  {
    v19 = v17 - 4;
    if ( v17 - 4 >= (int)raidDayComponents->max_length )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v21 = (int64_t)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v22 = this->fields.titleInfoEventRaidDayObjs;
      if ( v22 )
      {
        if ( v19 >= v22->max_length )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_34803616(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v22->obj.klass + v17),
          0LL);
        v23 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C21F74(v21, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v58 = sub_1C220B8(gameObject);
            sub_1C21F60(v58, 0LL);
          }
          if ( v19 >= v23[6] )
LABEL_37:
            sub_1C2209C(gameObject, v6);
          *(_QWORD *)&v23[2 * v17] = v21;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v23[v18], v21, v24, v25, v26, v27, v28, v29);
          raidDayComponents = *p_raidDayComponents;
          ++v17;
          v18 += 2LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v30 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v30 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v30->static_fields->OLD_RAID_DAY_COUNT;
  v31 = (struct TitleInfoEventRaidHpComponent_array *)sub_1C21EE0(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v31;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.raidHpComponents, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1C22094(gameObject, v6);
  v40 = 0LL;
  v41 = 8LL;
  while ( (__int64)v40 < (int)raidHpComponents->max_length )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v43 = (int64_t)gameObject;
    v44 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(v44, this->fields.oneDayHpObj, 0LL);
    if ( !v44 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v44, 0LL);
    v60 = v40 + 1;
    v46 = System_Int32__ToString((int32_t)&v60, 0LL);
    v47 = System_String__Concat_63115476(name, v46, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v44, v47, 0LL);
    v48 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v48 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v44, (float)(int)v40 * (float)-v48->static_fields->WIDTH, 0LL);
    v49 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1C21F74(v43, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v40 >= v49[6] )
      goto LABEL_37;
    *(_QWORD *)&v49[2 * v40 + 8] = v43;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v49[v41], v43, v50, v51, v52, v53, v54, v55);
    raidHpComponents = *p_raidHpComponents;
    v41 += 2LL;
    ++v40;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v56 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v56 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    (float)(int)(OLD_RAID_DAY_COUNT - 1) * (float)-v56->static_fields->WIDTH,
    0LL);
  ((void (__fastcall *)(TitleInfoEventRaidBossOldComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


void __fastcall TitleInfoEventRaidBossOldComponent__UpdateDisp(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  EventRaidMaster_o *v5; // x20
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t max_length; // w23
  int v8; // w26
  int32_t v9; // w22
  EventRaidEntity_o *v10; // x20
  int64_t v11; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x24
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UISprite_o *raidBossIconSp; // x20
  System_String_o *v16; // x24
  EventRaidMaster_o *v17; // x21
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v19; // w24
  il2cpp_array_size_t v20; // w9
  struct TitleInfoEventRaidHpComponent_array *v21; // x8
  TotalEventRaidMaster_o *v22; // x24
  unsigned __int64 v23; // x26
  int64_t v24; // x29
  int64_t v25; // x28
  float v26; // s9
  unsigned __int64 v27; // x22
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v30; // w27
  float v31; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  __int64 v33; // x8
  QuestReleaseMaster_o *v34; // x29
  unsigned __int64 v35; // x25
  int32_t v36; // w20
  struct TitleInfoEventRaidHpComponent_array *v37; // x8
  System_String_o *v38; // x20
  System_String_o *v39; // x0
  Il2CppObject *NumberFormat_39642888; // x0
  TitleInfoEventRaidHpComponent_c *v41; // x8
  __int64 v42; // x9
  struct TitleInfoEventRaidHpComponent_array *v43; // x10
  float v44; // s8
  float v45; // s1
  __int64 v46; // x9
  struct TitleInfoEventRaidHpComponent_array *v47; // x8
  int v48; // w8
  float v49; // s0
  int v50; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v52; // [xsp+4h] [xbp-ACh]
  int v53; // [xsp+8h] [xbp-A8h]
  int v54; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v55; // [xsp+10h] [xbp-A0h]
  int64_t v56; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v57; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4BDA831 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C21E38(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_13617/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_4BDA831 = 1;
  }
  entity = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v8 = Instance;
  v55 = v5;
  if ( (int)Instance <= 0 )
  {
    v10 = EventRaidMaster__GetEntity(v5, this->fields.eventId, max_length, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0LL);
    if ( !v10 )
      goto LABEL_97;
    if ( Instance < v10->fields.endedAt )
      return;
    v9 = max_length;
    v53 = 1;
  }
  else
  {
    v53 = 0;
    v9 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v55, this->fields.eventId, v9, 0LL);
  v11 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  if ( !v11 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v13 = System_Int32__ToString((int)v11 + 64, 0LL);
  v14 = System_String__Concat_63115476(RAIDBOSS_ICON_SPNAME_PREFIX, v13, 0LL);
  raidBossIconSp = this->fields.raidBossIconSp;
  v16 = v14;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v16, 0LL);
  v17 = v55;
  if ( !raidBossIconSp )
    goto LABEL_97;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossIconSp, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.raidBossIconSp;
  if ( !Instance )
    goto LABEL_97;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v8 > 0, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidDayComponents = this->fields.raidDayComponents;
    if ( !raidDayComponents )
      goto LABEL_97;
    v19 = 0;
    while ( 1 )
    {
      v20 = raidDayComponents->max_length;
      if ( v19 >= (int)v20 )
        break;
      if ( v19 >= v20 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v19];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          this->fields.eventId,
          v9 - 1 + v19,
          v19,
          0LL);
        raidDayComponents = this->fields.raidDayComponents;
        ++v19;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v54 = v9;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v52 = v8;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v21 = this->fields.raidHpComponents;
  if ( !v21 )
    goto LABEL_97;
  v22 = (TotalEventRaidMaster_o *)Instance;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0.0;
  while ( (__int64)v23 < (int)v21->max_length )
  {
    v27 = v23 + 1;
    Instance = EventRaidMaster__TryGetEntity(v17, &entity, this->fields.eventId, v23 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v22 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v22, &v57, this->fields.eventId, v27, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v57 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v57->fields.totalDamage;
      if ( v53 | (v54 > (int)v27) )
      {
        if ( maxHp <= totalDamage )
          v30 = 1;
        else
          v30 = 2;
      }
      else if ( v27 == v54 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0LL);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v33 = *(_QWORD *)&QuestIdListByGroupId->max_length;
          if ( (int)v33 >= 1 )
          {
            v34 = (QuestReleaseMaster_o *)Instance;
            v30 = 0;
            v35 = 0LL;
            while ( v35 < (unsigned int)v33 )
            {
              if ( !v34 )
                goto LABEL_97;
              v36 = QuestIdListByGroupId->m_Items[v35 + 1];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v34,
                                    v36,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v54,
                                    0LL);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v36, 0, 0LL);
                if ( (Instance & 1) != 0 )
                  v30 = 1;
              }
              LODWORD(v33) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v35 >= (int)v33 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1C2209C(Instance, v4);
          }
          v30 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v25 = entity->fields.maxHp;
        }
        else
        {
          v31 = (double)totalDamage / (double)maxHp;
          v30 = 0;
          v26 = 1.0 - v31;
          v25 = v57->fields.totalDamage;
        }
        v24 = maxHp;
      }
      else
      {
        v30 = 0;
      }
      v17 = v55;
    }
    else
    {
LABEL_43:
      v30 = 0;
    }
    v37 = this->fields.raidHpComponents;
    if ( !v37 )
      goto LABEL_97;
    if ( v23 >= v37->max_length )
      goto LABEL_98;
    Instance = (int64_t)v37->m_Items[v23];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v30, 0LL);
      v21 = this->fields.raidHpComponents;
      ++v23;
      if ( v21 )
        continue;
    }
    goto LABEL_97;
  }
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v52 > 0, 0LL);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_97;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    goto LABEL_81;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13617/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
  v56 = v24 - v25;
  v39 = System_Int64__ToString((int64_t)&v56, 0LL);
  NumberFormat_39642888 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v39, 0LL);
  Instance = (int64_t)System_String__Format(v38, NumberFormat_39642888, 0LL);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1C22094(Instance, v4);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0LL);
LABEL_81:
  v41 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v41 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v42 = *(_QWORD *)(Instance + 56);
  if ( !v42 )
    goto LABEL_97;
  v43 = this->fields.raidHpComponents;
  if ( !v43 )
    goto LABEL_97;
  v44 = (float)(v41->static_fields->WIDTH / (float)*(int *)(v42 + 168)) * (float)(int)v43->max_length;
  v45 = fminf(v44, 1.0);
  if ( v44 < 0.0 )
    v45 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v54))
          + (float)((float)(1.0 / (float)max_length) * v26))
  * v45,
    0LL);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v46 = *(_QWORD *)(Instance + 56);
  if ( !v46 )
    goto LABEL_97;
  v47 = this->fields.raidHpComponents;
  if ( !v47 )
    goto LABEL_97;
  v48 = v47->max_length;
  v49 = (float)((float)*(int *)(v46 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v50 = (int)v49;
  if ( v49 == INFINITY )
    v50 = 0x80000000;
  if ( v50 >= v48 )
    v44 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v44, 0LL);
}