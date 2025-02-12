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

  if ( (byte_4BB29E5 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_23135/*"q{0}"*/, v8);
    byte_4BB29E5 = 1;
  }
  TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_23135/*"q{0}"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields,
    StringLiteral_23135/*"q{0}"*/,
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
  if ( (byte_4BB29E3 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB29E3 = 1;
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
        UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
        v21 = *p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          if ( v11 >= v21->max_length )
LABEL_28:
            sub_1C13F88(this, method);
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v21 + v12), 0LL, v15, v16, v17, v18, v19, v20);
          raidDayComponents = *p_raidDayComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
LABEL_25:
      sub_1C13F80(this, method);
    }
    *p_raidDayComponents = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields.raidDayComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
        UnityEngine_Object__Destroy_70721988(v28, 0LL);
        klass = p_raidHpComponents->klass;
        if ( p_raidHpComponents->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_28;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)klass + v26), 0LL, v29, v30, v31, v32, v33, v34);
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
    sub_1C13CC8(p_raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  __int64 v25; // x22
  __int64 v26; // x24
  unsigned __int64 v27; // x28
  Il2CppObject *titleInfoEventRaidDayPrefab; // x21
  int64_t v29; // x21
  struct UnityEngine_GameObject_array *v30; // x8
  unsigned int *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  EventRaidMaster_c *v38; // x0
  struct TitleInfoEventRaidHpComponent_array *v39; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  unsigned __int64 v48; // x29
  __int64 v49; // x28
  Il2CppObject *titleInfoEventRaidHpPrefab; // x22
  int64_t v51; // x22
  UnityEngine_GameObject_o *v52; // x23
  System_String_o *name; // x24
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  TitleInfoEventRaidHpComponent_c *v56; // x0
  unsigned int *v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  TitleInfoEventRaidHpComponent_c *v64; // x0
  UnityEngine_GameObject_o *leftPos; // x21
  __int64 v66; // x0
  unsigned int OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-68h]
  int v68; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BB29E2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&EventRaidMaster_TypeInfo, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v6);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&TitleInfoEventRaidDayComponent___TypeInfo, v10);
    sub_1C13D24(&TitleInfoEventRaidHpComponent___TypeInfo, v11);
    sub_1C13D24(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    byte_4BB29E2 = 1;
  }
  v68 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  titleInfoEventRaidDayObjs = this->fields.titleInfoEventRaidDayObjs;
  this->fields.eventId = eventId;
  if ( !titleInfoEventRaidDayObjs )
    goto LABEL_33;
  v16 = (struct TitleInfoEventRaidDayComponent_array *)sub_1C13DCC(
                                                         TitleInfoEventRaidDayComponent___TypeInfo,
                                                         titleInfoEventRaidDayObjs->max_length);
  this->fields.raidDayComponents = v16;
  p_raidDayComponents = &this->fields.raidDayComponents;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.raidDayComponents, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  raidDayComponents = this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_33;
  v25 = 4LL;
  v26 = 8LL;
  while ( 1 )
  {
    v27 = v25 - 4;
    if ( v25 - 4 >= (int)raidDayComponents->max_length )
      break;
    titleInfoEventRaidDayPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidDayPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidDayPrefab,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v29 = (int64_t)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v30 = this->fields.titleInfoEventRaidDayObjs;
      if ( v30 )
      {
        if ( v27 >= v30->max_length )
          goto LABEL_37;
        GameObjectExtensions__SafeSetParent_34717732(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v30->obj.klass + v25),
          0LL);
        v31 = (unsigned int *)*p_raidDayComponents;
        if ( *p_raidDayComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C13E60(v29, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
          if ( !gameObject )
          {
LABEL_38:
            v66 = sub_1C13FA4(gameObject);
            sub_1C13E4C(v66, 0LL);
          }
          if ( v27 >= v31[6] )
LABEL_37:
            sub_1C13F88(gameObject, v14);
          *(_QWORD *)&v31[2 * v25] = v29;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v31[v26], v29, v32, v33, v34, v35, v36, v37);
          raidDayComponents = *p_raidDayComponents;
          ++v25;
          v26 += 2LL;
          if ( *p_raidDayComponents )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_33;
  DataManager__GetMasterData_object_(
    (DataManager_o *)gameObject,
    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v38 = EventRaidMaster_TypeInfo;
  if ( !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v38 = EventRaidMaster_TypeInfo;
  }
  OLD_RAID_DAY_COUNT = v38->static_fields->OLD_RAID_DAY_COUNT;
  v39 = (struct TitleInfoEventRaidHpComponent_array *)sub_1C13DCC(
                                                        TitleInfoEventRaidHpComponent___TypeInfo,
                                                        OLD_RAID_DAY_COUNT);
  this->fields.raidHpComponents = v39;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.raidHpComponents, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
LABEL_33:
    sub_1C13F80(gameObject, v14);
  v48 = 0LL;
  v49 = 8LL;
  while ( (__int64)v48 < (int)raidHpComponents->max_length )
  {
    titleInfoEventRaidHpPrefab = (Il2CppObject *)this->fields.titleInfoEventRaidHpPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_33;
    v51 = (int64_t)gameObject;
    v52 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_34717732(v52, this->fields.oneDayHpObj, 0LL);
    if ( !v52 )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v52, 0LL);
    v68 = v48 + 1;
    v54 = System_Int32__ToString((int32_t)&v68, 0LL);
    v55 = System_String__Concat_62967944(name, v54, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v52, v55, 0LL);
    v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v52, (float)(int)v48 * (float)-v56->static_fields->WIDTH, 0LL);
    v57 = (unsigned int *)*p_raidHpComponents;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)sub_1C13E60(v51, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
    if ( !gameObject )
      goto LABEL_38;
    if ( v48 >= v57[6] )
      goto LABEL_37;
    *(_QWORD *)&v57[2 * v48 + 8] = v51;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v57[v49], v51, v58, v59, v60, v61, v62, v63);
    raidHpComponents = *p_raidHpComponents;
    v49 += 2LL;
    ++v48;
    if ( !*p_raidHpComponents )
      goto LABEL_33;
  }
  v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  leftPos = this->fields.leftPos;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    leftPos,
    (float)(int)(OLD_RAID_DAY_COUNT - 1) * (float)-v64->static_fields->WIDTH,
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
  struct TitleInfoEventRaidDayComponent_array *raidDayComponents; // x8
  int32_t v30; // w24
  il2cpp_array_size_t v31; // w9
  struct TitleInfoEventRaidHpComponent_array *v32; // x8
  TotalEventRaidMaster_o *v33; // x24
  unsigned __int64 v34; // x26
  int64_t v35; // x29
  int64_t v36; // x28
  float v37; // s9
  unsigned __int64 v38; // x22
  int64_t maxHp; // x21
  int64_t totalDamage; // x8
  int32_t v41; // w27
  float v42; // s0
  System_Int32_array *QuestIdListByGroupId; // x28
  __int64 v44; // x8
  QuestReleaseMaster_o *v45; // x29
  unsigned __int64 v46; // x25
  int32_t v47; // w20
  struct TitleInfoEventRaidHpComponent_array *v48; // x8
  System_String_o *v49; // x20
  System_String_o *v50; // x0
  Il2CppObject *NumberFormat_39542644; // x0
  TitleInfoEventRaidHpComponent_c *v52; // x8
  __int64 v53; // x9
  struct TitleInfoEventRaidHpComponent_array *v54; // x10
  float v55; // s8
  float v56; // s1
  __int64 v57; // x9
  struct TitleInfoEventRaidHpComponent_array *v58; // x8
  int v59; // w8
  float v60; // s0
  int v61; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  int v63; // [xsp+4h] [xbp-ACh]
  int v64; // [xsp+8h] [xbp-A8h]
  int v65; // [xsp+Ch] [xbp-A4h]
  EventRaidMaster_o *v66; // [xsp+10h] [xbp-A0h]
  int64_t v67; // [xsp+20h] [xbp-90h] BYREF
  TotalEventRaidEntity_o *v68; // [xsp+28h] [xbp-88h] BYREF
  EventRaidEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF

  if ( (byte_4BB29E4 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_1C13D24(&TitleInfoEventRaidBossOldComponent_TypeInfo, v11);
    sub_1C13D24(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_13594/*"TIME_REST_TIMEOVER"*/, v13);
    byte_4BB29E4 = 1;
  }
  entity = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_97;
  v16 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, this->fields.eventId, 0LL);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_97;
  max_length = raidHpComponents->max_length;
  v19 = Instance;
  v66 = v16;
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
    v64 = 1;
  }
  else
  {
    v64 = 0;
    v20 = Instance;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v66, this->fields.eventId, v20, 0LL);
  v22 = Instance;
  if ( !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  if ( !v22 )
    goto LABEL_97;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v24 = System_Int32__ToString((int)v22 + 64, 0LL);
  v25 = System_String__Concat_62967944(RAIDBOSS_ICON_SPNAME_PREFIX, v24, 0LL);
  raidBossIconSp = this->fields.raidBossIconSp;
  v27 = v25;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(raidBossIconSp, v27, 0LL);
  v28 = v66;
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
    v30 = 0;
    while ( 1 )
    {
      v31 = raidDayComponents->max_length;
      if ( v30 >= (int)v31 )
        break;
      if ( v30 >= v31 )
        goto LABEL_98;
      Instance = (int64_t)raidDayComponents->m_Items[v30];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          this->fields.eventId,
          v20 - 1 + v30,
          v30,
          0LL);
        raidDayComponents = this->fields.raidDayComponents;
        ++v30;
        if ( raidDayComponents )
          continue;
      }
      goto LABEL_97;
    }
  }
  v65 = v20;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v63 = v19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v32 = this->fields.raidHpComponents;
  if ( !v32 )
    goto LABEL_97;
  v33 = (TotalEventRaidMaster_o *)Instance;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0.0;
  while ( (__int64)v34 < (int)v32->max_length )
  {
    v38 = v34 + 1;
    Instance = EventRaidMaster__TryGetEntity(v28, &entity, this->fields.eventId, v34 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_43;
    if ( !v33 )
      goto LABEL_97;
    Instance = TotalEventRaidMaster__TryGetEntity(v33, &v68, this->fields.eventId, v38, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity || !v68 )
        goto LABEL_97;
      maxHp = entity->fields.maxHp;
      totalDamage = v68->fields.totalDamage;
      if ( v64 | (v65 > (int)v38) )
      {
        if ( maxHp <= totalDamage )
          v41 = 1;
        else
          v41 = 2;
      }
      else if ( v38 == v65 )
      {
        if ( maxHp <= totalDamage )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( !Instance )
            goto LABEL_97;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   this->fields.eventId,
                                   1,
                                   0LL);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_97;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
          if ( !QuestIdListByGroupId )
            goto LABEL_97;
          v44 = *(_QWORD *)&QuestIdListByGroupId->max_length;
          if ( (int)v44 >= 1 )
          {
            v45 = (QuestReleaseMaster_o *)Instance;
            v41 = 0;
            v46 = 0LL;
            while ( v46 < (unsigned int)v44 )
            {
              if ( !v45 )
                goto LABEL_97;
              v47 = QuestIdListByGroupId->m_Items[v46 + 1];
              Instance = (int64_t)QuestReleaseMaster__GetEntity(
                                    v45,
                                    v47,
                                    28,
                                    this->fields.eventId,
                                    (unsigned int)v65,
                                    0LL);
              if ( Instance )
              {
                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                if ( !Instance )
                  goto LABEL_97;
                Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v47, 0, 0LL);
                if ( (Instance & 1) != 0 )
                  v41 = 1;
              }
              LODWORD(v44) = QuestIdListByGroupId->max_length;
              if ( (__int64)++v46 >= (int)v44 )
                goto LABEL_63;
            }
LABEL_98:
            sub_1C13F88(Instance, v15);
          }
          v41 = 0;
LABEL_63:
          if ( !entity )
            goto LABEL_97;
          v36 = entity->fields.maxHp;
        }
        else
        {
          v42 = (double)totalDamage / (double)maxHp;
          v41 = 0;
          v37 = 1.0 - v42;
          v36 = v68->fields.totalDamage;
        }
        v35 = maxHp;
      }
      else
      {
        v41 = 0;
      }
      v28 = v66;
    }
    else
    {
LABEL_43:
      v41 = 0;
    }
    v48 = this->fields.raidHpComponents;
    if ( !v48 )
      goto LABEL_97;
    if ( v34 >= v48->max_length )
      goto LABEL_98;
    Instance = (int64_t)v48->m_Items[v34];
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v41, 0LL);
      v32 = this->fields.raidHpComponents;
      ++v34;
      if ( v32 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v63 > 0, 0LL);
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
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TIME_REST_TIMEOVER"*/, 0LL);
  v67 = v35 - v36;
  v50 = System_Int64__ToString((int64_t)&v67, 0LL);
  NumberFormat_39542644 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39542644(v50, 0LL);
  Instance = (int64_t)System_String__Format(v49, NumberFormat_39542644, 0LL);
  if ( !this->fields.totalHpLabel )
LABEL_97:
    sub_1C13F80(Instance, v15);
  UILabel__set_text(this->fields.totalHpLabel, (System_String_o *)Instance, 0LL);
LABEL_81:
  v52 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v52 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v53 = *(_QWORD *)(Instance + 56);
  if ( !v53 )
    goto LABEL_97;
  v54 = this->fields.raidHpComponents;
  if ( !v54 )
    goto LABEL_97;
  v55 = (float)(v52->static_fields->WIDTH / (float)*(int *)(v53 + 168)) * (float)(int)v54->max_length;
  v56 = fminf(v55, 1.0);
  if ( v55 < 0.0 )
    v56 = 0.0;
  UIProgressBar__set_value(
    (UIProgressBar_o *)Instance,
    (float)((float)((float)(1.0 / (float)max_length) * (float)(max_length - v65))
          + (float)((float)(1.0 / (float)max_length) * v37))
  * v56,
    0LL);
  Instance = (int64_t)this->fields.hpBarSlider;
  if ( !Instance )
    goto LABEL_97;
  v57 = *(_QWORD *)(Instance + 56);
  if ( !v57 )
    goto LABEL_97;
  v58 = this->fields.raidHpComponents;
  if ( !v58 )
    goto LABEL_97;
  v59 = v58->max_length;
  v60 = (float)((float)*(int *)(v57 + 168) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  v61 = (int)v60;
  if ( v60 == INFINITY )
    v61 = 0x80000000;
  if ( v61 >= v59 )
    v55 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v55, 0LL);
}