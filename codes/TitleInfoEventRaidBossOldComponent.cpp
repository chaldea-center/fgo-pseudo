void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B1AE8C & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_22730/*"raid_boss_icon_"*/, v4);
    byte_4B1AE8C = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22730/*"raid_boss_icon_"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_22730/*"raid_boss_icon_"*/,
    v2,
    v3);
}


void __fastcall TitleInfoEventRaidBossOldComponent___ctor(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaidBossOldComponent__Destroy(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  TitleInfoEventRaidBossOldComponent_o *v4; // x19
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  il2cpp_array_size_t v7; // w23
  __int64 v8; // x24
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v11; // x3
  struct TitleInfoEventRaidDayComponent_array *v12; // x8
  CGThumbnailListItem_c *v13; // x8
  CGThumbnailListItem_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v16; // w21
  __int64 v17; // x23
  unsigned int namespaze; // w9
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x3
  CGThumbnailListItem_c *klass; // x8

  v4 = this;
  if ( (byte_4B1AE8A & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1AE8A = 1;
  }
  p_raidDayComponents = &v4->fields.raidDayComponents;
  raidDayComponents = v4->fields.raidDayComponents;
  if ( raidDayComponents )
  {
    v7 = 0;
    v8 = 32LL;
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
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
        v12 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v7 >= v12->max_length )
LABEL_28:
            sub_1BCB25C(this, method, v2);
          *(Il2CppClass **)((char *)&v12->obj.klass + v8) = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v12 + v8), 0, v2, v11);
          raidDayComponents = *p_raidDayComponents;
          ++v7;
          v8 += 8LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1BCB254(this, method);
    }
    *p_raidDayComponents = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.raidDayComponents, 0, v2, v3);
  }
  raidHpComponents = v4->fields.raidHpComponents;
  p_raidHpComponents = (CGThumbnailListItem_o *)&v4->fields.raidHpComponents;
  v13 = (CGThumbnailListItem_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v16 = 0;
    v17 = 32LL;
    while ( 1 )
    {
      namespaze = (unsigned int)v13->_1.namespaze;
      if ( (int)v16 >= (int)namespaze )
        break;
      if ( v16 >= namespaze )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&v13->_1.image + v17);
      if ( this )
      {
        v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70136076(v19, 0LL);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v16 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v17) = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)klass + v17), 0, v2, v20);
          v13 = p_raidHpComponents->klass;
          ++v16;
          v17 += 8LL;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0LL;
    sub_1BCAF9C(p_raidHpComponents, 0, v2, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v14; // x1
  struct UnityEngine_GameObject_array *titleInfoEventRaidDayObjs; // x8
  struct TitleInfoEventRaidDayComponent_array *v16; // x0
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v21; // x22
  __int64 v22; // x24
  unsigned __int64 v23; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  UnityEngine_Component_o *v25; // x21
  __int64 v26; // x2
  struct UnityEngine_GameObject_array *v27; // x8
  unsigned int *v28; // x23
  const MethodInfo *v29; // x3
  EventRaidMaster_c *v30; // x0
  struct TitleInfoEventRaidHpComponent_array *v31; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v36; // x29
  __int64 v37; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  UnityEngine_Component_o *v39; // x22
  UnityEngine_GameObject_o *v40; // x23
  System_String_o *name; // x24
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  TitleInfoEventRaidHpComponent_c *v44; // x0
  unsigned int *v45; // x20
  const MethodInfo *v46; // x3
  TitleInfoEventRaidHpComponent_c *v47; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v49; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v51; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1AE89 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&EventRaidMaster_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&TitleInfoEventRaidDayComponent___TypeInfo, v10);
    sub_1BCAFF8(&TitleInfoEventRaidHpComponent___TypeInfo, v11);
    sub_1BCAFF8(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    byte_4B1AE89 = 1;
  }
  v51 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v16 = (struct TitleInfoEventRaidDayComponent_array *)sub_1BCB0A0(
                                                         TitleInfoEventRaidDayComponent___TypeInfo,
                                                         titleInfoEventRaidDayObjs->max_length);
  this->fields.raidDayComponents = v16;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.raidDayComponents, (int32_t)v16, v18, v19);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v21 = 4LL;
  v22 = 8LL;
  while ( 1 )
  {
    v23 = v21 - 4;
    if ( v21 - 4 >= (int)raidDayComponents->max_length )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v25 = gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v27 = this->fields.titleInfoEventRaidDayObjs;
      if ( v27 )
      {
        if ( v23 >= v27->max_length )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_35362640(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v27->obj.klass + v21),
          0LL);
        v28 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCB134(v25, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v49 = sub_1BCB278(gameObject);
            sub_1BCB120(v49, 0LL);
          }
          if ( v23 >= v28[6] )
LABEL_37:
            sub_1BCB25C(gameObject, v14, v26);
          *(_QWORD *)&v28[2 * v21] = v25;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v28[v22], (int32_t)v25, v26, v29);
          raidDayComponents = *p_raidDayComponents;
          ++v21;
          v22 += 2LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v30 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v30 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v30->static_fields->OLD_RAID_DAY_COUNT;
  v31 = (struct TitleInfoEventRaidHpComponent_array *)sub_1BCB0A0(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v31;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.raidHpComponents, (int32_t)v31, v33, v34);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1BCB254(gameObject, v14);
  v36 = 0LL;
  v37 = 8LL;
  while ( (__int64)v36 < (int)raidHpComponents->max_length )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v39 = gameObject;
    v40 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_35362640(v40, this->fields.oneDayHpObj, 0LL);
    if ( !v40 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v40, 0LL);
    v51 = v36 + 1;
    v42 = System_Int32__ToString((int32_t)&v51, 0LL);
    v43 = System_String__Concat_62450424(name, v42, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v40, v43, 0LL);
    v44 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v44 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v40, (float)(int)v36 * (float)-v44->static_fields->WIDTH, 0LL);
    v45 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1BCB134(v39, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v36 >= v45[6] )
      goto LABEL_37;
    *(_QWORD *)&v45[2 * v36 + 8] = v39;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v45[v37], (int32_t)v39, v26, v46);
    raidHpComponents = *p_raidHpComponents;
    v37 += 2LL;
    ++v36;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v47 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v47 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    (float)(int)(OLD_RAID_DAY_COUNT - 1) * (float)-v47->static_fields->WIDTH,
    0LL);
  ((void (__fastcall *)(TitleInfoEventRaidBossOldComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


void __fastcall TitleInfoEventRaidBossOldComponent__UpdateDisp(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  EventRaidMaster_o *v16; // x20
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t max_length; // w23
  int v19; // w26
  int32_t v20; // w22
  EventRaidEntity_o *v21; // x20
  int64_t v22; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x24
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UISprite_o *raidBossIconSp; // x20
  System_String_o *v27; // x24
  EventRaidMaster_o *v28; // x21
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v32; // w24
  il2cpp_array_size_t v33; // w9
  struct TitleInfoEventRaidHpComponent_array *v34; // x8
  TotalEventRaidMaster_o *v35; // x24
  unsigned __int64 v36; // x26
  int64_t v37; // x29
  int64_t v38; // x28
  float v39; // s9
  unsigned __int64 v40; // x22
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v43; // w27
  float v44; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  __int64 v46; // x8
  QuestReleaseMaster_o *v47; // x29
  unsigned __int64 v48; // x25
  int32_t v49; // w20
  struct TitleInfoEventRaidHpComponent_array *v50; // x8
  System_String_o *v51; // x20
  System_String_o *v52; // x0
  Il2CppObject *NumberFormat_40454332; // x0
  TitleInfoEventRaidHpComponent_c *v54; // x8
  __int64 v55; // x9
  struct TitleInfoEventRaidHpComponent_array *v56; // x10
  float v57; // s8
  float v58; // s1
  __int64 v59; // x9
  struct TitleInfoEventRaidHpComponent_array *v60; // x8
  int v61; // w8
  float v62; // s0
  int v63; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v65; // [xsp+4h] [xbp-ACh]
  int v66; // [xsp+8h] [xbp-A8h]
  int v67; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v68; // [xsp+10h] [xbp-A0h]
  int64_t v69; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v70; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4B1AE8B & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_1BCAFF8(&TitleInfoEventRaidBossOldComponent_TypeInfo, v11);
    sub_1BCAFF8(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_13336/*"TITLE_INFO_RAID_TOTALHP"*/, v13);
    byte_4B1AE8B = 1;
  }
  entity = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v16 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v19 = Instance;
  v68 = v16;
  if ( (int)Instance <= 0 )
  {
    v21 = EventRaidMaster__GetEntity(v16, this->fields.eventId, max_length, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0LL);
    if ( !v21 )
      goto LABEL_97;
    if ( Instance < v21->fields.endedAt )
      return;
    v20 = max_length;
    v66 = 1;
  }
  else
  {
    v66 = 0;
    v20 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v68, this->fields.eventId, v20, 0LL);
  v22 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  if ( !v22 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v24 = System_Int32__ToString((int)v22 + 64, 0LL);
  v25 = System_String__Concat_62450424(RAIDBOSS_ICON_SPNAME_PREFIX, v24, 0LL);
  raidBossIconSp = this->fields.raidBossIconSp;
  v27 = v25;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v27, 0LL);
  v28 = v68;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v19 > 0, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidDayComponents = this->fields.raidDayComponents;
    if ( !raidDayComponents )
      goto LABEL_97;
    v32 = 0;
    while ( 1 )
    {
      v33 = raidDayComponents->max_length;
      if ( v32 >= (int)v33 )
        break;
      if ( v32 >= v33 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v32];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          v15,
          v20 - 1 + v32,
          v32,
          v30);
        raidDayComponents = this->fields.raidDayComponents;
        ++v32;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v67 = v20;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v65 = v19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v34 = this->fields.raidHpComponents;
  if ( !v34 )
    goto LABEL_97;
  v35 = (TotalEventRaidMaster_o *)Instance;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0.0;
  while ( (__int64)v36 < (int)v34->max_length )
  {
    v40 = v36 + 1;
    Instance = EventRaidMaster__TryGetEntity(v28, &entity, this->fields.eventId, v36 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v35 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v35, &v70, this->fields.eventId, v40, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v70 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v70->fields.totalDamage;
      if ( v66 | (v67 > (int)v40) )
      {
        if ( maxHp <= totalDamage )
          v43 = 1;
        else
          v43 = 2;
      }
      else if ( v40 == v67 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0LL);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v46 = *(_QWORD *)&QuestIdListByGroupId->max_length;
          if ( (int)v46 >= 1 )
          {
            v47 = (QuestReleaseMaster_o *)Instance;
            v43 = 0;
            v48 = 0LL;
            while ( v48 < (unsigned int)v46 )
            {
              if ( !v47 )
                goto LABEL_97;
              v49 = QuestIdListByGroupId->m_Items[v48 + 1];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v47,
                                    v49,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v67,
                                    0LL);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v49, 0, 0LL);
                if ( (Instance & 1) != 0 )
                  v43 = 1;
              }
              LODWORD(v46) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v48 >= (int)v46 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1BCB25C(Instance, v15, v29);
          }
          v43 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v38 = entity->fields.maxHp;
        }
        else
        {
          v44 = (double)totalDamage / (double)maxHp;
          v43 = 0;
          v39 = 1.0 - v44;
          v38 = v70->fields.totalDamage;
        }
        v37 = maxHp;
      }
      else
      {
        v43 = 0;
      }
      v28 = v68;
    }
    else
    {
LABEL_43:
      v43 = 0;
    }
    v50 = this->fields.raidHpComponents;
    if ( !v50 )
      goto LABEL_97;
    if ( v36 >= v50->max_length )
      goto LABEL_98;
    Instance = (int64_t)v50->m_Items[v36];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v43, v29);
      v34 = this->fields.raidHpComponents;
      ++v36;
      if ( v34 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v65 > 0, 0LL);
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
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_13336/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
  v69 = v37 - v38;
  v52 = System_Int64__ToString((int64_t)&v69, 0LL);
  NumberFormat_40454332 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40454332(v52, 0LL);
  Instance = (int64_t)System_String__Format(v51, NumberFormat_40454332, 0LL);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1BCB254(Instance, v15);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0LL);
LABEL_81:
  v54 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v54 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v55 = *(_QWORD *)(Instance + 56);
  if ( !v55 )
    goto LABEL_97;
  v56 = this->fields.raidHpComponents;
  if ( !v56 )
    goto LABEL_97;
  v57 = (float)(v54->static_fields->WIDTH / (float)*(int *)(v55 + 168)) * (float)(int)v56->max_length;
  v58 = fminf(v57, 1.0);
  if ( v57 < 0.0 )
    v58 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v67))
          + (float)((float)(1.0 / (float)max_length) * v39))
  * v58,
    0LL);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v59 = *(_QWORD *)(Instance + 56);
  if ( !v59 )
    goto LABEL_97;
  v60 = this->fields.raidHpComponents;
  if ( !v60 )
    goto LABEL_97;
  v61 = v60->max_length;
  v62 = (float)((float)*(int *)(v59 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v63 = (int)v62;
  if ( v62 == INFINITY )
    v63 = 0x80000000;
  if ( v63 >= v61 )
    v57 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v57, 0LL);
}