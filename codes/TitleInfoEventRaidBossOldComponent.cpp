void TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2F2FB & 1) == 0 )
  {
    sub_1C93AD4(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_23222/*"raid_boss_icon_"*/);
    byte_4D2F2FB = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23222/*"raid_boss_icon_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_23222/*"raid_boss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TitleInfoEventRaidBossOldComponent___ctor(TitleInfoEventRaidBossOldComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventRaidBossOldComponent__Destroy(TitleInfoEventRaidBossOldComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TitleInfoEventRaidBossOldComponent_o *v8; // x19
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  unsigned int v11; // w23
  __int64 v12; // x24
  unsigned int max_length; // w9
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct TitleInfoEventRaidDayComponent_array *v21; // x8
  GrandQuestFolderBoardItem_c *v22; // x8
  GrandQuestFolderBoardItem_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v25; // w21
  __int64 v26; // x23
  unsigned int namespaze; // w9
  UnityEngine_Object_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  GrandQuestFolderBoardItem_c *klass; // x8

  v8 = this;
  if ( (byte_4D2F2F9 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F2F9 = 1;
  }
  p_raidDayComponents = &v8->fields.raidDayComponents;
  raidDayComponents = v8->fields.raidDayComponents;
  if ( raidDayComponents )
  {
    v11 = 0;
    v12 = 32;
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
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(gameObject, 0);
        v21 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v11 >= LODWORD(v21->max_length) )
LABEL_28:
            sub_1C93D34(this);
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v21 + v12), 0, v15, v16, v17, v18, v19, v20);
          raidDayComponents = *p_raidDayComponents;
          ++v11;
          v12 += 8;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1C93D2C(this, method);
    }
    *p_raidDayComponents = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.raidDayComponents, 0, v2, v3, v4, v5, v6, v7);
  }
  raidHpComponents = v8->fields.raidHpComponents;
  p_raidHpComponents = (GrandQuestFolderBoardItem_o *)&v8->fields.raidHpComponents;
  v22 = (GrandQuestFolderBoardItem_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v25 = 0;
    v26 = 32;
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
        v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(v28, 0);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v26) = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)klass + v26), 0, v29, v30, v31, v32, v33, v34);
          v22 = p_raidHpComponents->klass;
          ++v25;
          v26 += 8;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0;
    sub_1C93A78(p_raidHpComponents, 0, v2, v3, v4, v5, v6, v7);
  }
}


bool TitleInfoEventRaidBossOldComponent__IsDispPossible(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventRaidBossOldComponent__IsEventRaidBoss(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidBossOldComponent__Setup(
        TitleInfoEventRaidBossOldComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *titleInfoEventRaidDayObjs; // x8
  struct TitleInfoEventRaidDayComponent_array *v8; // x0
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v17; // x22
  __int64 v18; // x24
  unsigned __int64 v19; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  UnityEngine_Component_o *v21; // x21
  struct UnityEngine_GameObject_array *v22; // x8
  unsigned int *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  EventRaidMaster_c *v30; // x0
  struct TitleInfoEventRaidHpComponent_array *v31; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v40; // x29
  __int64 v41; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  UnityEngine_Component_o *v43; // x22
  UnityEngine_GameObject_o *v44; // x23
  System_String_o *name; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  TitleInfoEventRaidHpComponent_c *v48; // x0
  unsigned int *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  TitleInfoEventRaidHpComponent_c *v56; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v58; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2F2F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C93AD4(&EventRaidMaster_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TitleInfoEventRaidDayComponent___TypeInfo);
    sub_1C93AD4(&TitleInfoEventRaidHpComponent___TypeInfo);
    sub_1C93AD4(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_4D2F2F8 = 1;
  }
  v60 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v8 = (struct TitleInfoEventRaidDayComponent_array *)sub_1C93B7C(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(titleInfoEventRaidDayObjs->max_length));
  this->fields.raidDayComponents = v8;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.raidDayComponents, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v17 = 4;
  v18 = 8;
  while ( 1 )
  {
    v19 = v17 - 4;
    if ( v17 - 4 >= SLODWORD(raidDayComponents->max_length) )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v21 = gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      v22 = this->fields.titleInfoEventRaidDayObjs;
      if ( v22 )
      {
        if ( v19 >= LODWORD(v22->max_length) )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_36750960(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v22->obj.klass + v17),
          0);
        v23 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C93C10(v21, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v58 = sub_1C93D50(gameObject);
            sub_1C93BFC(v58, 0);
          }
          if ( v19 >= v23[6] )
LABEL_37:
            sub_1C93D34(gameObject);
          *(_QWORD *)&v23[2 * v17] = v21;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23[v18], (int32_t)v21, v24, v25, v26, v27, v28, v29);
          raidDayComponents = *p_raidDayComponents;
          ++v17;
          v18 += 2;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v30 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v30 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v30->static_fields->OLD_RAID_DAY_COUNT;
  v31 = (struct TitleInfoEventRaidHpComponent_array *)sub_1C93B7C(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v31;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.raidHpComponents, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1C93D2C(gameObject, v6);
  v40 = 0;
  v41 = 8;
  while ( (__int64)v40 < SLODWORD(raidHpComponents->max_length) )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v43 = gameObject;
    v44 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SafeSetParent_36750960(v44, this->fields.oneDayHpObj, 0);
    if ( !v44 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v44, 0);
    v60 = v40 + 1;
    v46 = System_Int32__ToString((int32_t)&v60, 0);
    v47 = System_String__Concat_64425724(name, v46, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v44, v47, 0);
    v48 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v48 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v44, (float)(int)v40 * (float)-v48->static_fields->WIDTH, 0);
    v49 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1C93C10(v43, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v40 >= v49[6] )
      goto LABEL_37;
    *(_QWORD *)&v49[2 * v40 + 8] = v43;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v49[v41], (int32_t)v43, v50, v51, v52, v53, v54, v55);
    raidHpComponents = *p_raidHpComponents;
    v41 += 2;
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
    0);
  ((void (__fastcall *)(TitleInfoEventRaidBossOldComponent_o *, const MethodInfo *))this->klass->vtable._5_UpdateDisp.methodPtr)(
    this,
    this->klass->vtable._5_UpdateDisp.method);
}


void TitleInfoEventRaidBossOldComponent__UpdateDisp(
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
  const MethodInfo *v18; // x4
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v20; // w24
  int32_t v21; // w9
  struct TitleInfoEventRaidHpComponent_array *v22; // x8
  TotalEventRaidMaster_o *v23; // x24
  unsigned __int64 v24; // x26
  int64_t v25; // x29
  int64_t v26; // x28
  float v27; // s9
  unsigned __int64 v28; // x22
  const MethodInfo *v29; // x2
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v32; // w27
  float v33; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  il2cpp_array_size_t v35; // x8
  QuestReleaseMaster_o *v36; // x29
  unsigned __int64 v37; // x25
  int32_t v38; // w20
  struct TitleInfoEventRaidHpComponent_array *v39; // x8
  System_String_o *v40; // x20
  System_String_o *v41; // x0
  Il2CppObject *NumberFormat_42000268; // x0
  TitleInfoEventRaidHpComponent_c *v43; // x8
  __int64 v44; // x9
  struct TitleInfoEventRaidHpComponent_array *v45; // x10
  float v46; // s8
  float v47; // s1
  __int64 v48; // x9
  struct TitleInfoEventRaidHpComponent_array *v49; // x8
  int v50; // w8
  float v51; // s0
  int v52; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v54; // [xsp+4h] [xbp-ACh]
  int v55; // [xsp+8h] [xbp-A8h]
  int v56; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v57; // [xsp+10h] [xbp-A0h]
  int64_t v58; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v59; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4D2F2FA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C93AD4(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C93AD4(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_13550/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_4D2F2FA = 1;
  }
  entity = 0;
  v58 = 0;
  v59 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v8 = Instance;
  v57 = v5;
  if ( (int)Instance <= 0 )
  {
    v10 = EventRaidMaster__GetEntity(v5, this->fields.eventId, max_length, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0);
    if ( !v10 )
      goto LABEL_97;
    if ( Instance < v10->fields.endedAt )
      return;
    v9 = max_length;
    v55 = 1;
  }
  else
  {
    v55 = 0;
    v9 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v57, this->fields.eventId, v9, 0);
  v11 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  if ( !v11 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v13 = System_Int32__ToString((int)v11 + 72, 0);
  v14 = System_String__Concat_64425724(RAIDBOSS_ICON_SPNAME_PREFIX, v13, 0);
  raidBossIconSp = this->fields.raidBossIconSp;
  v16 = v14;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v16, 0);
  v17 = v57;
  if ( !raidBossIconSp )
    goto LABEL_97;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossIconSp, Instance & 1, 0);
  Instance = (int64_t)this->fields.raidBossIconSp;
  if ( !Instance )
    goto LABEL_97;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v8 > 0, 0);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    raidDayComponents = this->fields.raidDayComponents;
    if ( !raidDayComponents )
      goto LABEL_97;
    v20 = 0;
    while ( 1 )
    {
      v21 = raidDayComponents->max_length;
      if ( v20 >= v21 )
        break;
      if ( v20 >= (unsigned int)v21 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v20];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup((TitleInfoEventRaidDayComponent_o *)Instance, v4, v9 - 1 + v20, v20, v18);
        raidDayComponents = this->fields.raidDayComponents;
        ++v20;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v56 = v9;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v54 = v8;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v22 = this->fields.raidHpComponents;
  if ( !v22 )
    goto LABEL_97;
  v23 = (TotalEventRaidMaster_o *)Instance;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0.0;
  while ( (__int64)v24 < SLODWORD(v22->max_length) )
  {
    v28 = v24 + 1;
    Instance = EventRaidMaster__TryGetEntity(v17, &entity, this->fields.eventId, v24 + 1, 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v23 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v23, &v59, this->fields.eventId, v28, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v59 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v59->fields.totalDamage;
      if ( v55 | (v56 > (int)v28) )
      {
        if ( maxHp <= totalDamage )
          v32 = 1;
        else
          v32 = 2;
      }
      else if ( v28 == v56 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v35 = QuestIdListByGroupId->max_length;
          if ( (int)v35 >= 1 )
          {
            v36 = (QuestReleaseMaster_o *)Instance;
            v32 = 0;
            v37 = 0;
            while ( v37 < (unsigned int)v35 )
            {
              if ( !v36 )
                goto LABEL_97;
              v38 = QuestIdListByGroupId->m_Items[v37];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v36,
                                    v38,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v56,
                                    0);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v38, 0, 0);
                if ( (Instance & 1) != 0 )
                  v32 = 1;
              }
              LODWORD(v35) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v37 >= (int)v35 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1C93D34(Instance);
          }
          v32 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v26 = entity->fields.maxHp;
        }
        else
        {
          v33 = (double)totalDamage / (double)maxHp;
          v32 = 0;
          v27 = 1.0 - v33;
          v26 = v59->fields.totalDamage;
        }
        v25 = maxHp;
      }
      else
      {
        v32 = 0;
      }
      v17 = v57;
    }
    else
    {
LABEL_43:
      v32 = 0;
    }
    v39 = this->fields.raidHpComponents;
    if ( !v39 )
      goto LABEL_97;
    if ( v24 >= LODWORD(v39->max_length) )
      goto LABEL_98;
    Instance = (int64_t)v39->m_Items[v24];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v32, v29);
      v22 = this->fields.raidHpComponents;
      ++v24;
      if ( v22 )
        continue;
    }
    goto LABEL_97;
  }
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v54 > 0, 0);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_97;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
    goto LABEL_81;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13550/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
  v58 = v25 - v26;
  v41 = System_Int64__ToString((int64_t)&v58, 0);
  NumberFormat_42000268 = (Il2CppObject *)LocalizationManager__GetNumberFormat_42000268(v41, 0);
  Instance = (int64_t)System_String__Format(v40, NumberFormat_42000268, 0);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1C93D2C(Instance, v4);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0);
LABEL_81:
  v43 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v43 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v44 = *(_QWORD *)(Instance + 56);
  if ( !v44 )
    goto LABEL_97;
  v45 = this->fields.raidHpComponents;
  if ( !v45 )
    goto LABEL_97;
  v46 = (float)(v43->static_fields->WIDTH / (float)*(int *)(v44 + 168)) * (float)SLODWORD(v45->max_length);
  v47 = fminf(v46, 1.0);
  if ( v46 < 0.0 )
    v47 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v56))
          + (float)((float)(1.0 / (float)max_length) * v27))
  * v47,
    0);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v48 = *(_QWORD *)(Instance + 56);
  if ( !v48 )
    goto LABEL_97;
  v49 = this->fields.raidHpComponents;
  if ( !v49 )
    goto LABEL_97;
  v50 = v49->max_length;
  v51 = (float)((float)*(int *)(v48 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v52 = (int)v51;
  if ( v51 == INFINITY )
    v52 = 0x80000000;
  if ( v52 >= v50 )
    v46 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, v46, 0);
}