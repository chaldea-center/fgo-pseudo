void TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5936F58 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_24082/*"raid_boss_icon_"*/);
    byte_5936F58 = 1;
  }
  v7 = StringLiteral_24082/*"raid_boss_icon_"*/;
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_24082/*"raid_boss_icon_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    v7,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TitleInfoEventRaidBossOldComponent_o *v8; // x19
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  unsigned int v11; // w23
  unsigned int max_length; // w9
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct TitleInfoEventRaidDayComponent_array *v22; // x8
  __int64 v23; // x0
  MissionNaviTransitionBoardItem_c *v24; // x8
  MissionNaviTransitionBoardItem_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v27; // w21
  unsigned int namespaze; // w9
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  MissionNaviTransitionBoardItem_c *klass; // x8
  void **v39; // x0

  v8 = this;
  if ( (byte_5936F56 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936F56 = 1;
  }
  p_raidDayComponents = &v8->fields.raidDayComponents;
  raidDayComponents = v8->fields.raidDayComponents;
  if ( raidDayComponents )
  {
    v11 = 0;
    while ( 1 )
    {
      max_length = raidDayComponents->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_28;
      this = (TitleInfoEventRaidBossOldComponent_o *)raidDayComponents->m_Items[v11];
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
        v22 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v11 >= LODWORD(v22->max_length) )
LABEL_28:
            sub_21FFED4(this);
          v23 = (__int64)v22 + 8 * (int)v11++;
          *(_QWORD *)(v23 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 32), 0, v16, v17, v18, v19, v20, v21);
          raidDayComponents = *p_raidDayComponents;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_21FFECC(this, method);
    }
    *p_raidDayComponents = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.raidDayComponents, 0, v2, v3, v4, v5, v6, v7);
  }
  raidHpComponents = v8->fields.raidHpComponents;
  p_raidHpComponents = (MissionNaviTransitionBoardItem_o *)&v8->fields.raidHpComponents;
  v24 = (MissionNaviTransitionBoardItem_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v27 = 0;
    while ( 1 )
    {
      namespaze = (unsigned int)v24->_1.namespaze;
      if ( (int)v27 >= (int)namespaze )
        break;
      if ( v27 >= namespaze )
        goto LABEL_28;
      this = (TitleInfoEventRaidBossOldComponent_o *)*((_QWORD *)&v24->_1.byval_arg.data + (int)v27);
      if ( this )
      {
        v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
        UnityEngine_Object__Destroy_83246496(v31, 0);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v27 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          v39 = &klass->_1.image + (int)v27++;
          v39[4] = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), 0, v32, v33, v34, v35, v36, v37);
          v24 = p_raidHpComponents->klass;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0;
    sub_21FFBF4(p_raidHpComponents, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x2
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v18; // x22
  __int64 v19; // x24
  unsigned __int64 v20; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  UnityEngine_Component_o *v22; // x21
  struct UnityEngine_GameObject_array *v23; // x8
  unsigned int *v24; // x23
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  EventRaidMaster_c *v34; // x0
  unsigned int OLD_RAID_DAY_COUNT; // w20
  struct TitleInfoEventRaidHpComponent_array *v36; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x2
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  __int64 v46; // x29
  __int64 v47; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  UnityEngine_Component_o *v49; // x22
  UnityEngine_GameObject_o *v50; // x23
  System_String_o *name; // x24
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  TitleInfoEventRaidHpComponent_c *v56; // x0
  unsigned int *v57; // x23
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  TitleInfoEventRaidHpComponent_c *v64; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v66; // x0
  int v67; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5936F55 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&EventRaidMaster_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventRaidDayComponent___TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidHpComponent___TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_5936F55 = 1;
  }
  v67 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v8 = (struct TitleInfoEventRaidDayComponent_array *)sub_21FFD10(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(titleInfoEventRaidDayObjs->max_length));
  this->fields.raidDayComponents = v8;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.raidDayComponents,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v18 = 4;
  v19 = 8;
  while ( 1 )
  {
    v20 = v18 - 4;
    if ( v18 - 4 >= SLODWORD(raidDayComponents->max_length) )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v16);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v22 = gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      v23 = this->fields.titleInfoEventRaidDayObjs;
      if ( v23 )
      {
        if ( v20 >= LODWORD(v23->max_length) )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_42881912(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v23->obj.klass + v18),
          0);
        v24 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_21FFDA4(v22, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v66 = sub_21FFEF0(gameObject, v25);
            sub_21FFD90(v66, 0);
          }
          if ( v20 >= v24[6] )
LABEL_37:
            sub_21FFED4(gameObject);
          *(_QWORD *)&v24[2 * v18] = v22;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24[v19], (int32_t)v22, v26, v27, v28, v29, v30, v31);
          raidDayComponents = *p_raidDayComponents;
          ++v18;
          v19 += 2;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v34 = EventRaidMaster_TypeInfo;
  if ( !*(&EventRaidMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo, v32, v33);
    v34 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v34->static_fields->OLD_RAID_DAY_COUNT;
  v36 = (struct TitleInfoEventRaidHpComponent_array *)sub_21FFD10(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v36;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.raidHpComponents,
    (int32_t)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_21FFECC(gameObject, v6);
  v46 = 0;
  v47 = 8;
  while ( v46 < SLODWORD(raidHpComponents->max_length) )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v44);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v49 = gameObject;
    v50 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SafeSetParent_42881912(v50, this->fields.oneDayHpObj, 0);
    if ( !v50 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v50, 0);
    v67 = ++v46;
    v52 = System_Int32__ToString((int32_t)&v67, 0);
    v53 = System_String__Concat_75438412(name, v52, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v50, v53, 0);
    v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v54, v55);
      v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v50, -(float)(v56->static_fields->WIDTH * (float)(v46 - 1)), 0);
    v57 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_21FFDA4(v49, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v46 - 1 >= (unsigned __int64)v57[6] )
      goto LABEL_37;
    *(_QWORD *)&v57[v47] = v49;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v57[v47], (int32_t)v49, v58, v59, v60, v61, v62, v63);
    raidHpComponents = *p_raidHpComponents;
    v47 += 2;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !*(&TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v6, v44);
    v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    -(float)(v64->static_fields->WIDTH * (float)(int)(OLD_RAID_DAY_COUNT - 1)),
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
  __int64 v10; // x1
  __int64 v11; // x2
  EventRaidEntity_o *v12; // x20
  __int64 v13; // x2
  int64_t v14; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x24
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UISprite_o *raidBossIconSp; // x20
  System_String_o *v21; // x24
  EventRaidMaster_o *v22; // x21
  const MethodInfo *v23; // x4
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v25; // x24
  int v26; // w9
  struct TitleInfoEventRaidHpComponent_array *v27; // x8
  TotalEventRaidMaster_o *v28; // x24
  unsigned __int64 v29; // x26
  int64_t v30; // x29
  int64_t v31; // x28
  float v32; // s9
  unsigned __int64 v33; // x22
  const MethodInfo *v34; // x2
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int v37; // w9
  int32_t v38; // w27
  float v39; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  il2cpp_array_size_t v41; // x8
  QuestReleaseMaster_o *v42; // x29
  unsigned __int64 v43; // x25
  int32_t v44; // w20
  struct TitleInfoEventRaidHpComponent_array *v45; // x8
  __int64 v46; // x2
  System_String_o *v47; // x20
  System_String_o *v48; // x0
  Il2CppObject *NumberFormat_48211828; // x0
  TitleInfoEventRaidHpComponent_c *v50; // x8
  __int64 v51; // x10
  struct TitleInfoEventRaidHpComponent_array *v52; // x9
  float WIDTH; // s1
  float v54; // s10
  float v55; // s0
  __int64 v56; // x9
  struct TitleInfoEventRaidHpComponent_array *v57; // x8
  int v58; // w8
  float v59; // s0
  int v60; // w9
  float v61; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  int v63; // [xsp+4h] [xbp-ACh]
  int v64; // [xsp+8h] [xbp-A8h]
  int v65; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v66; // [xsp+10h] [xbp-A0h]
  int64_t v67; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v68; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_5936F57 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_13979/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_5936F57 = 1;
  }
  entity = 0;
  v67 = 0;
  v68 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_72;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_72;
  max_length = raidHpComponents->max_length;
  v8 = Instance;
  v66 = v5;
  if ( (int)Instance <= 0 )
  {
    v12 = EventRaidMaster__GetEntity(v5, this->fields.eventId, max_length, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    Instance = NetworkManager__getTime(0);
    if ( !v12 )
      goto LABEL_72;
    if ( Instance < v12->fields.endedAt )
      return;
    v9 = max_length;
    v64 = 1;
  }
  else
  {
    v64 = 0;
    v9 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v66, this->fields.eventId, v9, 0);
  v14 = Instance;
  if ( !*(&TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo, v4, v13);
  if ( !v14 )
    goto LABEL_72;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v16 = System_Int32__ToString((int)v14 + 72, 0);
  v17 = System_String__Concat_75438412(RAIDBOSS_ICON_SPNAME_PREFIX, v16, 0);
  raidBossIconSp = this->fields.raidBossIconSp;
  v21 = v17;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v21, 0);
  v22 = v66;
  if ( !raidBossIconSp )
    goto LABEL_72;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)raidBossIconSp, Instance & 1, 0);
  Instance = (int64_t)this->fields.raidBossIconSp;
  if ( !Instance )
    goto LABEL_72;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v8 > 0, 0);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_72;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    raidDayComponents = this->fields.raidDayComponents;
    if ( !raidDayComponents )
      goto LABEL_72;
    v25 = 0;
    while ( 1 )
    {
      v26 = raidDayComponents->max_length;
      if ( (int)v25 >= v26 )
        break;
      if ( (unsigned int)v25 >= v26 )
        goto LABEL_102;
      Instance = (int64_t)raidDayComponents->m_Items[v25];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup((TitleInfoEventRaidDayComponent_o *)Instance, v4, v9 - 1 + v25, v25, v23);
        raidDayComponents = this->fields.raidDayComponents;
        ++v25;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_72;
    }
  }
  v65 = v9;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  v63 = v8;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v27 = this->fields.raidHpComponents;
  if ( !v27 )
    goto LABEL_72;
  v28 = (TotalEventRaidMaster_o *)Instance;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0.0;
  while ( (__int64)v29 < SLODWORD(v27->max_length) )
  {
    v33 = v29 + 1;
    Instance = EventRaidMaster__TryGetEntity(v22, &entity, this->fields.eventId, v29 + 1, 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_45;
    if ( !v28 )
      goto LABEL_72;
    Instance = TotalEventRaidMaster__TryGetEntity(v28, &v68, this->fields.eventId, v33, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v68 )
        goto LABEL_72;
      maxHp = entity->fields.maxHp;
      totalDamage = v68->fields.totalDamage;
      v37 = v64;
      if ( v65 > (int)v33 )
        v37 = 1;
      if ( v37 )
      {
        if ( maxHp <= totalDamage )
          v38 = 1;
        else
          v38 = 2;
      }
      else if ( v33 == v65 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_72;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_72;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_72;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_72;
          v41 = QuestIdListByGroupId->max_length;
          if ( (int)v41 >= 1 )
          {
            v42 = (QuestReleaseMaster_o *)Instance;
            v38 = 0;
            v43 = 0;
            while ( v43 < (unsigned int)v41 )
            {
              if ( !v42 )
                goto LABEL_72;
              v44 = QuestIdListByGroupId->m_Items[v43];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v42,
                                    v44,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v65,
                                    0);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_72;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v44, 0, 0);
                if ( (Instance & 1) != 0 )
                  v38 = 1;
              }
              LODWORD(v41) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v43 >= (int)v41 )
                goto LABEL_65;
            }
LABEL_102:
            sub_21FFED4(Instance);
          }
          v38 = 0;
LABEL_65:
          if ( !entity )
            goto LABEL_72;
          v31 = entity->fields.maxHp;
          v30 = maxHp;
        }
        else
        {
          v38 = 0;
          v31 = v68->fields.totalDamage;
          v30 = entity->fields.maxHp;
          v39 = (double)totalDamage / (double)maxHp;
          v32 = 1.0 - v39;
        }
      }
      else
      {
        v38 = 0;
      }
      v22 = v66;
    }
    else
    {
LABEL_45:
      v38 = 0;
    }
    v45 = this->fields.raidHpComponents;
    if ( !v45 )
      goto LABEL_72;
    if ( v29 >= LODWORD(v45->max_length) )
      goto LABEL_102;
    Instance = (int64_t)v45->m_Items[v29];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v38, v34);
      v27 = this->fields.raidHpComponents;
      ++v29;
      if ( v27 )
        continue;
    }
    goto LABEL_72;
  }
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_72;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v63 > 0, 0);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_72;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_72;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
    goto LABEL_82;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v46);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13979/*"TITLE_INFO_RAID_TOTALHP"*/, 0);
  v67 = v30 - v31;
  v48 = System_Int64__ToString((int64_t)&v67, 0);
  NumberFormat_48211828 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v48, 0);
  Instance = (int64_t)System_String__Format(v47, NumberFormat_48211828, 0);
  if ( !this->fields.totalHpLabel )
LABEL_72:
    sub_21FFECC(Instance, v4);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0);
LABEL_82:
  v50 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !*(&TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v4, v46);
    v50 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_72;
  v51 = *(_QWORD *)(Instance + 56);
  if ( !v51 )
    goto LABEL_72;
  v52 = this->fields.raidHpComponents;
  if ( !v52 )
    goto LABEL_72;
  WIDTH = v50->static_fields->WIDTH;
  v54 = (float)(WIDTH / (float)*(int *)(v51 + 168)) * (float)SLODWORD(v52->max_length);
  v55 = 1.0;
  if ( v54 <= 1.0 )
    v55 = (float)(WIDTH / (float)*(int *)(v51 + 168)) * (float)SLODWORD(v52->max_length);
  if ( v54 < 0.0 )
    v55 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v65))
          + (float)((float)(1.0 / (float)max_length) * v32))
  * v55,
    0);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_72;
  v56 = *(_QWORD *)(Instance + 56);
  if ( !v56 )
    goto LABEL_72;
  v57 = this->fields.raidHpComponents;
  if ( !v57 )
    goto LABEL_72;
  v58 = v57->max_length;
  v59 = (float)((float)*(int *)(v56 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  if ( v59 == INFINITY )
    v60 = 0x80000000;
  else
    v60 = (int)v59;
  if ( v60 >= v58 )
    v61 = 1.0;
  else
    v61 = v54;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, v61, 0);
}