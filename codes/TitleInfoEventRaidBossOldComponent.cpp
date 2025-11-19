void TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB4BE1 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_23030/*"raid_boss_icon_"*/);
    byte_4CB4BE1 = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23030/*"raid_boss_icon_"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_23030/*"raid_boss_icon_"*/,
    v1,
    v2);
}


void TitleInfoEventRaidBossOldComponent___ctor(TitleInfoEventRaidBossOldComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventRaidBossOldComponent__Destroy(TitleInfoEventRaidBossOldComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TitleInfoEventRaidBossOldComponent_o *v4; // x19
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  unsigned int v7; // w23
  __int64 v8; // x24
  unsigned int max_length; // w9
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct TitleInfoEventRaidDayComponent_array *v13; // x8
  CGThumbnailListItem_c *v14; // x8
  CGThumbnailListItem_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v17; // w21
  __int64 v18; // x23
  unsigned int namespaze; // w9
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CGThumbnailListItem_c *klass; // x8

  v4 = this;
  if ( (byte_4CB4BDF & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4BDF = 1;
  }
  p_raidDayComponents = &v4->fields.raidDayComponents;
  raidDayComponents = v4->fields.raidDayComponents;
  if ( raidDayComponents )
  {
    v7 = 0;
    v8 = 32;
    while ( 1 )
    {
      max_length = raidDayComponents->max_length;
      if ( (int)v7 >= (int)max_length )
        break;
      if ( v7 >= max_length )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&raidDayComponents->obj.klass + v8);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(gameObject, 0);
        v13 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v7 >= LODWORD(v13->max_length) )
LABEL_28:
            sub_1C6BC68(this);
          *(Il2CppClass **)((char *)&v13->obj.klass + v8) = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v13 + v8), 0, v11, v12);
          raidDayComponents = *p_raidDayComponents;
          ++v7;
          v8 += 8;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1C6BC60(this, method);
    }
    *p_raidDayComponents = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.raidDayComponents, 0, v2, v3);
  }
  raidHpComponents = v4->fields.raidHpComponents;
  p_raidHpComponents = (CGThumbnailListItem_o *)&v4->fields.raidHpComponents;
  v14 = (CGThumbnailListItem_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v17 = 0;
    v18 = 32;
    while ( 1 )
    {
      namespaze = (unsigned int)v14->_1.namespaze;
      if ( (int)v17 >= (int)namespaze )
        break;
      if ( v17 >= namespaze )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&v14->_1.image + v18);
      if ( this )
      {
        v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(v20, 0);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v17 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v18) = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)((char *)klass + v18), 0, v21, v22);
          v14 = p_raidHpComponents->klass;
          ++v17;
          v18 += 8;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0;
    sub_1C6B9AC(p_raidHpComponents, 0, v2, v3);
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
  const MethodInfo *v11; // x3
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v13; // x22
  __int64 v14; // x24
  unsigned __int64 v15; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  UnityEngine_Component_o *v17; // x21
  struct UnityEngine_GameObject_array *v18; // x8
  unsigned int *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  EventRaidMaster_c *v22; // x0
  struct TitleInfoEventRaidHpComponent_array *v23; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v28; // x29
  __int64 v29; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  UnityEngine_Component_o *v31; // x22
  UnityEngine_GameObject_o *v32; // x23
  System_String_o *name; // x24
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  TitleInfoEventRaidHpComponent_c *v36; // x0
  unsigned int *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  TitleInfoEventRaidHpComponent_c *v40; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v42; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v44; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB4BDE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C6BA08(&EventRaidMaster_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoEventRaidDayComponent___TypeInfo);
    sub_1C6BA08(&TitleInfoEventRaidHpComponent___TypeInfo);
    sub_1C6BA08(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_4CB4BDE = 1;
  }
  v44 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v8 = (struct TitleInfoEventRaidDayComponent_array *)sub_1C6BAB0(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(titleInfoEventRaidDayObjs->max_length));
  this->fields.raidDayComponents = v8;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.raidDayComponents, (int32_t)v8, v10, v11);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v13 = 4;
  v14 = 8;
  while ( 1 )
  {
    v15 = v13 - 4;
    if ( v13 - 4 >= SLODWORD(raidDayComponents->max_length) )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v17 = gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      v18 = this->fields.titleInfoEventRaidDayObjs;
      if ( v18 )
      {
        if ( v15 >= LODWORD(v18->max_length) )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_36361932(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v18->obj.klass + v13),
          0);
        v19 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C6BB44(v17, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v42 = sub_1C6BC84(gameObject);
            sub_1C6BB30(v42, 0);
          }
          if ( v15 >= v19[6] )
LABEL_37:
            sub_1C6BC68(gameObject);
          *(_QWORD *)&v19[2 * v13] = v17;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v19[v14], (int32_t)v17, v20, v21);
          raidDayComponents = *p_raidDayComponents;
          ++v13;
          v14 += 2;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v22 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v22 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v22->static_fields->OLD_RAID_DAY_COUNT;
  v23 = (struct TitleInfoEventRaidHpComponent_array *)sub_1C6BAB0(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v23;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.raidHpComponents, (int32_t)v23, v25, v26);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1C6BC60(gameObject, v6);
  v28 = 0;
  v29 = 8;
  while ( (__int64)v28 < SLODWORD(raidHpComponents->max_length) )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v31 = gameObject;
    v32 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SafeSetParent_36361932(v32, this->fields.oneDayHpObj, 0);
    if ( !v32 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v32, 0);
    v44 = v28 + 1;
    v34 = System_Int32__ToString((int32_t)&v44, 0);
    v35 = System_String__Concat_63966792(name, v34, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v32, v35, 0);
    v36 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v36 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v32, (float)(int)v28 * (float)-v36->static_fields->WIDTH, 0);
    v37 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1C6BB44(v31, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v28 >= v37[6] )
      goto LABEL_37;
    *(_QWORD *)&v37[2 * v28 + 8] = v31;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v37[v29], (int32_t)v31, v38, v39);
    raidHpComponents = *p_raidHpComponents;
    v29 += 2;
    ++v28;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v40 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v40 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    (float)(int)(OLD_RAID_DAY_COUNT - 1) * (float)-v40->static_fields->WIDTH,
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
  Il2CppObject *NumberFormat_41508576; // x0
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

  if ( (byte_4CB4BE0 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_1C6BA08(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_13455/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_4CB4BE0 = 1;
  }
  entity = 0;
  v58 = 0;
  v59 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
  v13 = System_Int32__ToString((int)v11 + 64, 0);
  v14 = System_String__Concat_63966792(RAIDBOSS_ICON_SPNAME_PREFIX, v13, 0);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v54 = v8;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
            sub_1C6BC68(Instance);
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
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
  v58 = v25 - v26;
  v41 = System_Int64__ToString((int64_t)&v58, 0);
  NumberFormat_41508576 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41508576(v41, 0);
  Instance = (int64_t)System_String__Format(v40, NumberFormat_41508576, 0);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1C6BC60(Instance, v4);
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