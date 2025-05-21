void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B42E41 & 1) == 0 )
  {
    sub_1BDB878(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_22958/*"raid_boss_icon_"*/, v4);
    byte_4B42E41 = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22958/*"raid_boss_icon_"*/;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_22958/*"raid_boss_icon_"*/,
    v2,
    v3);
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
  if ( (byte_4B42E3F & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B42E3F = 1;
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
        UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
        v12 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v7 >= v12->max_length )
LABEL_28:
            sub_1BDBADC(this, method, v2);
          *(Il2CppClass **)((char *)&v12->obj.klass + v8) = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)((char *)v12 + v8), 0, v2, v11);
          raidDayComponents = *p_raidDayComponents;
          ++v7;
          v8 += 8LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1BDBAD4(this, method);
    }
    *p_raidDayComponents = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.raidDayComponents, 0, v2, v3);
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
        UnityEngine_Object__Destroy_70284200(v19, 0LL);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v16 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v17) = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)((char *)klass + v17), 0, v2, v20);
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
    sub_1BDB81C(p_raidHpComponents, 0, v2, v3);
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

  if ( (byte_4B42E3E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&EventRaidMaster_TypeInfo, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v6);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&TitleInfoEventRaidDayComponent___TypeInfo, v10);
    sub_1BDB878(&TitleInfoEventRaidHpComponent___TypeInfo, v11);
    sub_1BDB878(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    byte_4B42E3E = 1;
  }
  v51 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v16 = (struct TitleInfoEventRaidDayComponent_array *)sub_1BDB920(
                                                         TitleInfoEventRaidDayComponent___TypeInfo,
                                                         titleInfoEventRaidDayObjs->max_length);
  this->fields.raidDayComponents = v16;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.raidDayComponents, (int32_t)v16, v18, v19);
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
                                              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v25 = gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v27 = this->fields.titleInfoEventRaidDayObjs;
      if ( v27 )
      {
        if ( v23 >= v27->max_length )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_35216896(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v27->obj.klass + v21),
          0LL);
        v28 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BDB9B4(v25, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v49 = sub_1BDBAF8(gameObject);
            sub_1BDB9A0(v49, 0LL);
          }
          if ( v23 >= v28[6] )
LABEL_37:
            sub_1BDBADC(gameObject, v14, v26);
          *(_QWORD *)&v28[2 * v21] = v25;
          sub_1BDB81C((CGThumbnailListItem_o *)&v28[v22], (int32_t)v25, v26, v29);
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
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v30 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v30 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v30->static_fields->OLD_RAID_DAY_COUNT;
  v31 = (struct TitleInfoEventRaidHpComponent_array *)sub_1BDB920(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v31;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.raidHpComponents, (int32_t)v31, v33, v34);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1BDBAD4(gameObject, v14);
  v36 = 0LL;
  v37 = 8LL;
  while ( (__int64)v36 < (int)raidHpComponents->max_length )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v39 = gameObject;
    v40 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_35216896(v40, this->fields.oneDayHpObj, 0LL);
    if ( !v40 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v40, 0LL);
    v51 = v36 + 1;
    v42 = System_Int32__ToString((int32_t)&v51, 0LL);
    v43 = System_String__Concat_62572260(name, v42, 0LL);
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
    gameObject = (UnityEngine_Component_o *)sub_1BDB9B4(v39, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v36 >= v45[6] )
      goto LABEL_37;
    *(_QWORD *)&v45[2 * v36 + 8] = v39;
    sub_1BDB81C((CGThumbnailListItem_o *)&v45[v37], (int32_t)v39, v26, v46);
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
  __int64 v29; // x2
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v31; // w24
  il2cpp_array_size_t v32; // w9
  struct TitleInfoEventRaidHpComponent_array *v33; // x8
  TotalEventRaidMaster_o *v34; // x24
  unsigned __int64 v35; // x26
  int64_t v36; // x29
  int64_t v37; // x28
  float v38; // s9
  unsigned __int64 v39; // x22
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v42; // w27
  float v43; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  __int64 v45; // x8
  QuestReleaseMaster_o *v46; // x29
  unsigned __int64 v47; // x25
  int32_t v48; // w20
  struct TitleInfoEventRaidHpComponent_array *v49; // x8
  System_String_o *v50; // x20
  System_String_o *v51; // x0
  Il2CppObject *NumberFormat_40281376; // x0
  TitleInfoEventRaidHpComponent_c *v53; // x8
  __int64 v54; // x9
  struct TitleInfoEventRaidHpComponent_array *v55; // x10
  float v56; // s8
  float v57; // s1
  __int64 v58; // x9
  struct TitleInfoEventRaidHpComponent_array *v59; // x8
  int v60; // w8
  float v61; // s0
  int v62; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v64; // [xsp+4h] [xbp-ACh]
  int v65; // [xsp+8h] [xbp-A8h]
  int v66; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v67; // [xsp+10h] [xbp-A0h]
  int64_t v68; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v69; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4B42E40 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_1BDB878(&TitleInfoEventRaidBossOldComponent_TypeInfo, v11);
    sub_1BDB878(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_13423/*"TITLE_INFO_RAID_TOTALHP"*/, v13);
    byte_4B42E40 = 1;
  }
  entity = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v16 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v19 = Instance;
  v67 = v16;
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
    v65 = 1;
  }
  else
  {
    v65 = 0;
    v20 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v67, this->fields.eventId, v20, 0LL);
  v22 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  if ( !v22 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v24 = System_Int32__ToString((int)v22 + 64, 0LL);
  v25 = System_String__Concat_62572260(RAIDBOSS_ICON_SPNAME_PREFIX, v24, 0LL);
  raidBossIconSp = this->fields.raidBossIconSp;
  v27 = v25;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v27, 0LL);
  v28 = v67;
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
    v31 = 0;
    while ( 1 )
    {
      v32 = raidDayComponents->max_length;
      if ( v31 >= (int)v32 )
        break;
      if ( v31 >= v32 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v31];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          this->fields.eventId,
          v20 - 1 + v31,
          v31,
          0LL);
        raidDayComponents = this->fields.raidDayComponents;
        ++v31;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v66 = v20;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v64 = v19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v33 = this->fields.raidHpComponents;
  if ( !v33 )
    goto LABEL_97;
  v34 = (TotalEventRaidMaster_o *)Instance;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0.0;
  while ( (__int64)v35 < (int)v33->max_length )
  {
    v39 = v35 + 1;
    Instance = EventRaidMaster__TryGetEntity(v28, &entity, this->fields.eventId, v35 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v34 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v34, &v69, this->fields.eventId, v39, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v69 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v69->fields.totalDamage;
      if ( v65 | (v66 > (int)v39) )
      {
        if ( maxHp <= totalDamage )
          v42 = 1;
        else
          v42 = 2;
      }
      else if ( v39 == v66 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0LL);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v45 = *(_QWORD *)&QuestIdListByGroupId->max_length;
          if ( (int)v45 >= 1 )
          {
            v46 = (QuestReleaseMaster_o *)Instance;
            v42 = 0;
            v47 = 0LL;
            while ( v47 < (unsigned int)v45 )
            {
              if ( !v46 )
                goto LABEL_97;
              v48 = QuestIdListByGroupId->m_Items[v47 + 1];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v46,
                                    v48,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v66,
                                    0LL);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v48, 0, 0LL);
                if ( (Instance & 1) != 0 )
                  v42 = 1;
              }
              LODWORD(v45) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v47 >= (int)v45 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1BDBADC(Instance, v15, v29);
          }
          v42 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v37 = entity->fields.maxHp;
        }
        else
        {
          v43 = (double)totalDamage / (double)maxHp;
          v42 = 0;
          v38 = 1.0 - v43;
          v37 = v69->fields.totalDamage;
        }
        v36 = maxHp;
      }
      else
      {
        v42 = 0;
      }
      v28 = v67;
    }
    else
    {
LABEL_43:
      v42 = 0;
    }
    v49 = this->fields.raidHpComponents;
    if ( !v49 )
      goto LABEL_97;
    if ( v35 >= v49->max_length )
      goto LABEL_98;
    Instance = (int64_t)v49->m_Items[v35];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v42, 0LL);
      v33 = this->fields.raidHpComponents;
      ++v35;
      if ( v33 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v64 > 0, 0LL);
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
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13423/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
  v68 = v36 - v37;
  v51 = System_Int64__ToString((int64_t)&v68, 0LL);
  NumberFormat_40281376 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v51, 0LL);
  Instance = (int64_t)System_String__Format(v50, NumberFormat_40281376, 0LL);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1BDBAD4(Instance, v15);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0LL);
LABEL_81:
  v53 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v53 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v54 = *(_QWORD *)(Instance + 56);
  if ( !v54 )
    goto LABEL_97;
  v55 = this->fields.raidHpComponents;
  if ( !v55 )
    goto LABEL_97;
  v56 = (float)(v53->static_fields->WIDTH / (float)*(int *)(v54 + 168)) * (float)(int)v55->max_length;
  v57 = fminf(v56, 1.0);
  if ( v56 < 0.0 )
    v57 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v66))
          + (float)((float)(1.0 / (float)max_length) * v38))
  * v57,
    0LL);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v58 = *(_QWORD *)(Instance + 56);
  if ( !v58 )
    goto LABEL_97;
  v59 = this->fields.raidHpComponents;
  if ( !v59 )
    goto LABEL_97;
  v60 = v59->max_length;
  v61 = (float)((float)*(int *)(v58 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v62 = (int)v61;
  if ( v61 == INFINITY )
    v62 = 0x80000000;
  if ( v62 >= v60 )
    v56 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v56, 0LL);
}