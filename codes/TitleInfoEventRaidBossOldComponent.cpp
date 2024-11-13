void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B14534 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23004/*"raid_boss_icon_"*/, v8, v9);
    byte_4B14534 = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23004/*"raid_boss_icon_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_23004/*"raid_boss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct TitleInfoEventRaidDayComponent_array *v22; // x8
  PartyOrganizationUtility_c *v23; // x8
  PartyOrganizationUtility_o *p_raidHpComponents; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // t1
  unsigned int v26; // w21
  __int64 v27; // x23
  unsigned int namespaze; // w9
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_c *klass; // x8

  v8 = this;
  if ( (byte_4B14532 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14532 = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        v22 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v11 >= v22->max_length )
LABEL_28:
            sub_1BCAA44(this, method);
          *(Il2CppClass **)((char *)&v22->obj.klass + v12) = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)v22 + v12), 0LL, v16, v17, v18, v19, v20, v21);
          raidDayComponents = *p_raidDayComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1BCAA3C(this, method);
    }
    *p_raidDayComponents = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.raidDayComponents, 0LL, v2, v3, v4, v5, v6, v7);
  }
  raidHpComponents = v8->fields.raidHpComponents;
  p_raidHpComponents = (PartyOrganizationUtility_o *)&v8->fields.raidHpComponents;
  v23 = (PartyOrganizationUtility_c *)raidHpComponents;
  if ( raidHpComponents )
  {
    v26 = 0;
    v27 = 32LL;
    while ( 1 )
    {
      namespaze = (unsigned int)v23->_1.namespaze;
      if ( (int)v26 >= (int)namespaze )
        break;
      if ( v26 >= namespaze )
        goto LABEL_28;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&v23->_1.image + v27);
      if ( this )
      {
        v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        UnityEngine_Object__Destroy_70154244(v30, 0LL);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v26 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v27) = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)klass + v27), 0LL, v31, v32, v33, v34, v35, v36);
          v23 = p_raidHpComponents->klass;
          ++v26;
          v27 += 8LL;
          if ( p_raidHpComponents->klass )
            continue;
        }
      }
      goto LABEL_25;
    }
    p_raidHpComponents->klass = 0LL;
    sub_1BCA784(p_raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v22; // x1
  struct UnityEngine_GameObject_array *titleInfoEventRaidDayObjs; // x8
  struct TitleInfoEventRaidDayComponent_array *v24; // x0
  struct TitleInfoEventRaidDayComponent_array **p_raidDayComponents; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v33; // x22
  __int64 v34; // x24
  unsigned __int64 v35; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  int64_t v37; // x21
  struct UnityEngine_GameObject_array *v38; // x8
  unsigned int *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  EventRaidMaster_c *v47; // x0
  struct TitleInfoEventRaidHpComponent_array *v48; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v57; // x29
  __int64 v58; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  int64_t v60; // x22
  UnityEngine_GameObject_o *v61; // x23
  System_String_o *name; // x24
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  __int64 v65; // x1
  TitleInfoEventRaidHpComponent_c *v66; // x0
  unsigned int *v67; // x20
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  TitleInfoEventRaidHpComponent_c *v74; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v76; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v78; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B14531 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&EventRaidMaster_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&TitleInfoEventRaidDayComponent___TypeInfo, v15, v16);
    sub_1BCA7E0(&TitleInfoEventRaidHpComponent___TypeInfo, v17, v18);
    sub_1BCA7E0(&TitleInfoEventRaidHpComponent_TypeInfo, v19, v20);
    byte_4B14531 = 1;
  }
  v78 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v24 = (struct TitleInfoEventRaidDayComponent_array *)sub_1BCA888(
                                                         TitleInfoEventRaidDayComponent___TypeInfo,
                                                         titleInfoEventRaidDayObjs->max_length);
  this->fields.raidDayComponents = v24;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.raidDayComponents, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v33 = 4LL;
  v34 = 8LL;
  while ( 1 )
  {
    v35 = v33 - 4;
    if ( v33 - 4 >= (int)raidDayComponents->max_length )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v37 = (int64_t)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v38 = this->fields.titleInfoEventRaidDayObjs;
      if ( v38 )
      {
        if ( v35 >= v38->max_length )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_34336992(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v38->obj.klass + v33),
          0LL);
        v39 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA91C(v37, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v76 = sub_1BCAA60(gameObject);
            sub_1BCA908(v76, 0LL);
          }
          if ( v35 >= v39[6] )
LABEL_37:
            sub_1BCAA44(gameObject, v22);
          *(_QWORD *)&v39[2 * v33] = v37;
          sub_1BCA784((PartyOrganizationUtility_o *)&v39[v34], v37, v40, v41, v42, v43, v44, v45);
          raidDayComponents = *p_raidDayComponents;
          ++v33;
          v34 += 2LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v47 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo, v46);
    v47 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v47->static_fields->OLD_RAID_DAY_COUNT;
  v48 = (struct TitleInfoEventRaidHpComponent_array *)sub_1BCA888(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v48;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.raidHpComponents, (int64_t)v48, v50, v51, v52, v53, v54, v55);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1BCAA3C(gameObject, v22);
  v57 = 0LL;
  v58 = 8LL;
  while ( (__int64)v57 < (int)raidHpComponents->max_length )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v60 = (int64_t)gameObject;
    v61 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v61, this->fields.oneDayHpObj, 0LL);
    if ( !v61 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v61, 0LL);
    v78 = v57 + 1;
    v63 = System_Int32__ToString((int32_t)&v78, 0LL);
    v64 = System_String__Concat_62401220(name, v63, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v61, v64, 0LL);
    v66 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v65);
      v66 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v61, (float)(int)v57 * (float)-v66->static_fields->WIDTH, 0LL);
    v67 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1BCA91C(v60, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v57 >= v67[6] )
      goto LABEL_37;
    *(_QWORD *)&v67[2 * v57 + 8] = v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&v67[v58], v60, v68, v69, v70, v71, v72, v73);
    raidHpComponents = *p_raidHpComponents;
    v58 += 2LL;
    ++v57;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v74 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v22);
    v74 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    (float)(int)(OLD_RAID_DAY_COUNT - 1) * (float)-v74->static_fields->WIDTH,
    0LL);
  ((void (__fastcall *)(TitleInfoEventRaidBossOldComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


void __fastcall TitleInfoEventRaidBossOldComponent__UpdateDisp(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  int64_t Instance; // x0
  __int64 v27; // x1
  EventRaidMaster_o *v28; // x20
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t max_length; // w23
  int v31; // w26
  int32_t v32; // w22
  __int64 v33; // x1
  EventRaidEntity_o *v34; // x20
  int64_t v35; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x24
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x1
  UISprite_o *raidBossIconSp; // x20
  System_String_o *v41; // x24
  EventRaidMaster_o *v42; // x21
  const MethodInfo *v43; // x4
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v45; // w24
  il2cpp_array_size_t v46; // w9
  struct TitleInfoEventRaidHpComponent_array *v47; // x8
  TotalEventRaidMaster_o *v48; // x24
  unsigned __int64 v49; // x26
  int64_t v50; // x29
  int64_t v51; // x28
  float v52; // s9
  unsigned __int64 v53; // x22
  const MethodInfo *v54; // x2
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v57; // w27
  float v58; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  __int64 v60; // x8
  QuestReleaseMaster_o *v61; // x29
  unsigned __int64 v62; // x25
  int32_t v63; // w20
  struct TitleInfoEventRaidHpComponent_array *v64; // x8
  System_String_o *v65; // x20
  System_String_o *v66; // x0
  Il2CppObject *NumberFormat_39108640; // x0
  TitleInfoEventRaidHpComponent_c *v68; // x8
  __int64 v69; // x9
  struct TitleInfoEventRaidHpComponent_array *v70; // x10
  float v71; // s8
  float v72; // s1
  __int64 v73; // x9
  struct TitleInfoEventRaidHpComponent_array *v74; // x8
  int v75; // w8
  float v76; // s0
  int v77; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v79; // [xsp+4h] [xbp-ACh]
  int v80; // [xsp+8h] [xbp-A8h]
  int v81; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v82; // [xsp+10h] [xbp-A0h]
  int64_t v83; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v84; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4B14533 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v18, v19);
    sub_1BCA7E0(&TitleInfoEventRaidBossOldComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&TitleInfoEventRaidHpComponent_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_13524/*"TITLE_INFO_RAID_TOTALHP"*/, v24, v25);
    byte_4B14533 = 1;
  }
  entity = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v28 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v31 = Instance;
  v82 = v28;
  if ( (int)Instance <= 0 )
  {
    v34 = EventRaidMaster__GetEntity(v28, this->fields.eventId, max_length, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
    Instance = NetworkManager__getTime(0LL);
    if ( !v34 )
      goto LABEL_97;
    if ( Instance < v34->fields.endedAt )
      return;
    v32 = max_length;
    v80 = 1;
  }
  else
  {
    v80 = 0;
    v32 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v82, this->fields.eventId, v32, 0LL);
  v35 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo, v27);
  if ( !v35 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v37 = System_Int32__ToString((int)v35 + 48, 0LL);
  v38 = System_String__Concat_62401220(RAIDBOSS_ICON_SPNAME_PREFIX, v37, 0LL);
  raidBossIconSp = this->fields.raidBossIconSp;
  v41 = v38;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v41, 0LL);
  v42 = v82;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v31 > 0, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_97;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidDayComponents = this->fields.raidDayComponents;
    if ( !raidDayComponents )
      goto LABEL_97;
    v45 = 0;
    while ( 1 )
    {
      v46 = raidDayComponents->max_length;
      if ( v45 >= (int)v46 )
        break;
      if ( v45 >= v46 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v45];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          v27,
          v32 - 1 + v45,
          v45,
          v43);
        raidDayComponents = this->fields.raidDayComponents;
        ++v45;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v81 = v32;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v79 = v31;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v47 = this->fields.raidHpComponents;
  if ( !v47 )
    goto LABEL_97;
  v48 = (TotalEventRaidMaster_o *)Instance;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0.0;
  while ( (__int64)v49 < (int)v47->max_length )
  {
    v53 = v49 + 1;
    Instance = EventRaidMaster__TryGetEntity(v42, &entity, this->fields.eventId, v49 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v48 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v48, &v84, this->fields.eventId, v53, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v84 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v84->fields.totalDamage;
      if ( v80 | (v81 > (int)v53) )
      {
        if ( maxHp <= totalDamage )
          v57 = 1;
        else
          v57 = 2;
      }
      else if ( v53 == v81 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0LL);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v60 = *(_QWORD *)&QuestIdListByGroupId->max_length;
          if ( (int)v60 >= 1 )
          {
            v61 = (QuestReleaseMaster_o *)Instance;
            v57 = 0;
            v62 = 0LL;
            while ( v62 < (unsigned int)v60 )
            {
              if ( !v61 )
                goto LABEL_97;
              v63 = QuestIdListByGroupId->m_Items[v62 + 1];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v61,
                                    v63,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v81,
                                    0LL);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v63, 0, 0LL);
                if ( (Instance & 1) != 0 )
                  v57 = 1;
              }
              LODWORD(v60) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v62 >= (int)v60 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1BCAA44(Instance, v27);
          }
          v57 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v51 = entity->fields.maxHp;
        }
        else
        {
          v58 = (double)totalDamage / (double)maxHp;
          v57 = 0;
          v52 = 1.0 - v58;
          v51 = v84->fields.totalDamage;
        }
        v50 = maxHp;
      }
      else
      {
        v57 = 0;
      }
      v42 = v82;
    }
    else
    {
LABEL_43:
      v57 = 0;
    }
    v64 = this->fields.raidHpComponents;
    if ( !v64 )
      goto LABEL_97;
    if ( v49 >= v64->max_length )
      goto LABEL_98;
    Instance = (int64_t)v64->m_Items[v49];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v57, v54);
      v47 = this->fields.raidHpComponents;
      ++v49;
      if ( v47 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v79 > 0, 0LL);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_97;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    goto LABEL_81;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13524/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
  v83 = v50 - v51;
  v66 = System_Int64__ToString((int64_t)&v83, 0LL);
  NumberFormat_39108640 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v66, 0LL);
  Instance = (int64_t)System_String__Format(v65, NumberFormat_39108640, 0LL);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1BCAA3C(Instance, v27);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0LL);
LABEL_81:
  v68 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, v27);
    v68 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v69 = *(_QWORD *)(Instance + 56);
  if ( !v69 )
    goto LABEL_97;
  v70 = this->fields.raidHpComponents;
  if ( !v70 )
    goto LABEL_97;
  v71 = (float)(v68->static_fields->WIDTH / (float)*(int *)(v69 + 168)) * (float)(int)v70->max_length;
  v72 = fminf(v71, 1.0);
  if ( v71 < 0.0 )
    v72 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v81))
          + (float)((float)(1.0 / (float)max_length) * v52))
  * v72,
    0LL);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v73 = *(_QWORD *)(Instance + 56);
  if ( !v73 )
    goto LABEL_97;
  v74 = this->fields.raidHpComponents;
  if ( !v74 )
    goto LABEL_97;
  v75 = v74->max_length;
  v76 = (float)((float)*(int *)(v73 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v77 = (int)v76;
  if ( v76 == INFINITY )
    v77 = 0x80000000;
  if ( v77 >= v75 )
    v71 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v71, 0LL);
}