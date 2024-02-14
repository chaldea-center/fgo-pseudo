void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4218841 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_21748/*"raid_boss_icon_"*/, v8);
    byte_4218841 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21748/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21748/*"raid_boss_icon_"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoEventRaidBossOldComponent_o *v8; // x19
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x20
  il2cpp_array_size_t v11; // w22
  __int64 v12; // x23
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventRaidHpComponent_array *v21; // x8
  BattleServantConfConponent_c *v22; // x8
  BattleServantConfConponent_o *p_eventId; // x19
  BattleServantConfConponent_c *v24; // t1
  unsigned int v25; // w21
  __int64 v26; // x22
  unsigned int namespaze; // w9
  UnityEngine_Object_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_c *klass; // x8
  __int64 v36; // x0

  v8 = this;
  if ( (byte_421883F & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421883F = 1;
  }
  p_raidHpComponents = &v8->fields.raidHpComponents;
  raidHpComponents = v8->fields.raidHpComponents;
  if ( raidHpComponents )
  {
    v11 = 0;
    v12 = 32LL;
    while ( 1 )
    {
      max_length = raidHpComponents->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_30;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&raidHpComponents->obj.klass + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
        v21 = *p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          if ( v11 >= v21->max_length )
          {
LABEL_30:
            v36 = sub_B0D9A8(this);
            sub_B0D948(v36, 0LL);
          }
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v21 + v12), 0LL, v15, v16, v17, v18, v19, v20);
          raidHpComponents = *p_raidHpComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
LABEL_27:
      sub_B0D97C(this);
    }
    *p_raidHpComponents = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v8->fields.raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
  }
  v24 = *(BattleServantConfConponent_c **)&v8->fields.eventId;
  p_eventId = (BattleServantConfConponent_o *)&v8->fields.eventId;
  v22 = v24;
  if ( v24 )
  {
    v25 = 0;
    v26 = 32LL;
    while ( 1 )
    {
      namespaze = (unsigned int)v22->_1.namespaze;
      if ( (int)v25 >= (int)namespaze )
        break;
      if ( v25 >= namespaze )
        goto LABEL_30;
      this = *(TitleInfoEventRaidBossOldComponent_o **)((char *)&v22->_1.image + v26);
      if ( this )
      {
        v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v28, 0LL);
        klass = p_eventId->klass;
        if ( p_eventId->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_30;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)((char *)klass + v26), 0LL, v29, v30, v31, v32, v33, v34);
          v22 = p_eventId->klass;
          ++v25;
          v26 += 8LL;
          if ( p_eventId->klass )
            continue;
        }
      }
      goto LABEL_27;
    }
    p_eventId->klass = 0LL;
    sub_B0D840(p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct UnityEngine_GameObject_o *leftPos; // x8
  struct TitleInfoEventRaidHpComponent_array *v15; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  unsigned __int64 v26; // x26
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidHpPrefab; // x21
  System_Int32_array **v28; // x21
  struct UnityEngine_GameObject_o *v29; // x8
  unsigned int *v30; // x27
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EventRaidMaster_c *v37; // x0
  struct EventRaidMaster_StaticFields *static_fields; // x8
  System_Int32_array **v39; // x0
  int32_t *p_eventId; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned int *v47; // x8
  unsigned __int64 v48; // x20
  __int64 v49; // x27
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidDayObjs; // x22
  System_Int32_array **v51; // x22
  UnityEngine_GameObject_o *v52; // x23
  System_String_o *name; // x24
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  TitleInfoEventRaidHpComponent_c *v56; // x0
  unsigned int *v57; // x23
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  TitleInfoEventRaidHpComponent_c *v64; // x0
  UnityEngine_GameObject_o *raidBossIconSp; // x21
  __int64 v66; // x0
  __int64 v67; // x0
  int32_t OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-58h]
  int v69; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_421883E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventRaidMaster_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&TitleInfoEventRaidDayComponent___TypeInfo, v10);
    sub_B0D8A4(&TitleInfoEventRaidHpComponent___TypeInfo, v11);
    sub_B0D8A4(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    byte_421883E = 1;
  }
  v69 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  leftPos = this->fields.leftPos;
  LODWORD(this[1].klass) = eventId;
  if ( !leftPos )
    goto LABEL_37;
  v15 = (struct TitleInfoEventRaidHpComponent_array *)sub_B0D8BC(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(leftPos[1].klass));
  this->fields.raidHpComponents = v15;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.raidHpComponents,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_37;
  v24 = 4LL;
  v25 = 8LL;
  while ( 1 )
  {
    v26 = v24 - 4;
    if ( v24 - 4 >= (int)raidHpComponents->max_length )
      break;
    titleInfoEventRaidHpPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidHpPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v28 = (System_Int32_array **)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v29 = this->fields.leftPos;
      if ( v29 )
      {
        if ( v26 >= LODWORD(v29[1].klass) )
          goto LABEL_42;
        GameObjectExtensions__SafeSetParent_31184716(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v29->klass + v24),
          0LL);
        v30 = (unsigned int *)*p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_B0D964(v28, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
          if ( !gameObject )
          {
LABEL_43:
            v67 = sub_B0D99C(gameObject);
            sub_B0D948(v67, 0LL);
          }
          if ( v26 >= v30[6] )
          {
LABEL_42:
            v66 = sub_B0D9A8(gameObject);
            sub_B0D948(v66, 0LL);
          }
          *(_QWORD *)&v30[2 * v24] = v28;
          sub_B0D840((BattleServantConfConponent_o *)&v30[v25], v28, v31, v32, v33, v34, v35, v36);
          raidHpComponents = *p_raidHpComponents;
          ++v24;
          v25 += 2LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
    }
    goto LABEL_37;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_37;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)gameObject,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v37 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v37 = EventRaidMaster_TypeInfo;
  }
  static_fields = v37->static_fields;
  OLD_RAID_DAY_COUNT = static_fields->OLD_RAID_DAY_COUNT;
  v39 = (System_Int32_array **)sub_B0D8BC(
                                 TitleInfoEventRaidHpComponent___TypeInfo,
                                 (unsigned int)static_fields->OLD_RAID_DAY_COUNT);
  *(_QWORD *)&this->fields.eventId = v39;
  p_eventId = &this->fields.eventId;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventId, v39, v41, v42, v43, v44, v45, v46);
  v47 = *(unsigned int **)&this->fields.eventId;
  if ( !v47 )
LABEL_37:
    sub_B0D97C(gameObject);
  v48 = 0LL;
  v49 = 8LL;
  while ( (__int64)v48 < (int)v47[6] )
  {
    titleInfoEventRaidDayObjs = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidDayObjs;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidDayObjs,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_37;
    v51 = (System_Int32_array **)gameObject;
    v52 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_31184716(v52, (UnityEngine_GameObject_o *)this->fields.hpBarSlider, 0LL);
    if ( !v52 )
      goto LABEL_37;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v52, 0LL);
    v69 = v48 + 1;
    v54 = System_Int32__ToString((int32_t)&v69, 0LL);
    v55 = System_String__Concat_43849904(name, v54, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v52, v55, 0LL);
    v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v56 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v52, -(float)(v56->static_fields->WIDTH * (float)(int)v48), 0LL);
    v57 = *(unsigned int **)p_eventId;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
    gameObject = (UnityEngine_Component_o *)sub_B0D964(v51, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
    if ( !gameObject )
      goto LABEL_43;
    if ( v48 >= v57[6] )
      goto LABEL_42;
    *(_QWORD *)&v57[2 * v48 + 8] = v51;
    sub_B0D840((BattleServantConfConponent_o *)&v57[v49], v51, v58, v59, v60, v61, v62, v63);
    v47 = *(unsigned int **)p_eventId;
    v49 += 2LL;
    ++v48;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
  }
  v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  raidBossIconSp = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v64 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    raidBossIconSp,
    -(float)(v64->static_fields->WIDTH * (float)(OLD_RAID_DAY_COUNT - 1)),
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
  __int64 v14; // x1
  int64_t Instance; // x0
  EventRaidMaster_o *v16; // x20
  __int64 v17; // x8
  int32_t v18; // w22
  int32_t v19; // w24
  EventRaidEntity_o *v20; // x20
  int64_t v21; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct UnityEngine_GameObject_o *oneDayHpObj; // x20
  System_String_o *v26; // x23
  int32_t v27; // w1
  const MethodInfo *v28; // x4
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t v30; // w20
  int32_t max_length; // w9
  __int64 v32; // x8
  EventRaidMaster_o *v33; // x20
  TotalEventRaidMaster_o *v34; // x23
  int64_t v35; // x28
  int64_t v36; // x27
  unsigned int v37; // w25
  float v38; // s10
  float v39; // s8
  int32_t v40; // w21
  const MethodInfo *v41; // x2
  int64_t maxHp; // x26
  int64_t totalDamage; // x8
  int32_t v44; // w26
  System_Int32_array *QuestIdListByGroupId; // x27
  __int64 v46; // x8
  QuestReleaseMaster_o *v47; // x28
  unsigned __int64 v48; // x22
  int32_t v49; // w20
  __int64 v50; // x8
  float v51; // s0
  System_String_o *v52; // x20
  System_String_o *v53; // x0
  Il2CppObject *NumberFormat_32897236; // x0
  UIProgressBar_o *dayFrameObj; // x20
  struct UIWidget_o *mFG; // x8
  __int64 v57; // x9
  float v58; // s10
  float v59; // s8
  float v60; // s0
  __int64 v61; // x9
  __int64 v62; // x8
  int v63; // w8
  float v64; // s0
  double v65; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v67; // x0
  int64_t v68; // [xsp+8h] [xbp-A8h]
  int32_t v69; // [xsp+18h] [xbp-98h]
  int v70; // [xsp+1Ch] [xbp-94h]
  EventRaidMaster_o *v71; // [xsp+28h] [xbp-88h]
  int64_t v72; // [xsp+30h] [xbp-80h] BYREF
  TotalEventRaidEntity_o *v73; // [xsp+38h] [xbp-78h] BYREF
  EventRaidEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4218840 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v11);
    sub_B0D8A4(&TitleInfoEventRaidBossOldComponent_TypeInfo, v12);
    sub_B0D8A4(&TitleInfoEventRaidHpComponent_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_13467/*"TITLE_INFO_RAID_TOTALHP"*/, v14);
    byte_4218840 = 1;
  }
  entity = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_101;
  v16 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, (int32_t)this[1].klass, 0LL);
  v17 = *(_QWORD *)&this->fields.eventId;
  if ( !v17 )
    goto LABEL_101;
  v18 = *(_DWORD *)(v17 + 24);
  v19 = Instance;
  v71 = v16;
  if ( (int)Instance <= 0 )
  {
    v20 = EventRaidMaster__GetEntity(v16, (int32_t)this[1].klass, v18, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    if ( !v20 )
      goto LABEL_101;
    if ( Instance < v20->fields.endedAt )
      return;
    v16 = v71;
    v19 = v18;
    v70 = 1;
  }
  else
  {
    v70 = 0;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v16, (int32_t)this[1].klass, v19, 0LL);
  v21 = Instance;
  if ( (BYTE3(TitleInfoEventRaidBossOldComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  }
  if ( !v21 )
    goto LABEL_101;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v23 = System_Int32__ToString((int)v21 + 48, 0LL);
  v24 = System_String__Concat_43849904(RAIDBOSS_ICON_SPNAME_PREFIX, v23, 0LL);
  oneDayHpObj = this->fields.oneDayHpObj;
  v26 = v24;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI((UISprite_o *)oneDayHpObj, v26, 0LL);
  if ( !oneDayHpObj )
    goto LABEL_101;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)oneDayHpObj, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.oneDayHpObj;
  if ( !Instance )
    goto LABEL_101;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70 == 0, 0LL);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_101;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidHpComponents = this->fields.raidHpComponents;
    if ( !raidHpComponents )
      goto LABEL_101;
    v30 = 0;
    while ( 1 )
    {
      max_length = raidHpComponents->max_length;
      if ( v30 >= max_length )
        break;
      if ( v30 >= (unsigned int)max_length )
        goto LABEL_102;
      Instance = (int64_t)raidHpComponents->m_Items[v30];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          v27,
          v19 - 1 + v30,
          v30,
          v28);
        raidHpComponents = this->fields.raidHpComponents;
        ++v30;
        if ( raidHpComponents )
          continue;
      }
      goto LABEL_101;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v32 = *(_QWORD *)&this->fields.eventId;
  v33 = v71;
  if ( !v32 )
    goto LABEL_101;
  v34 = (TotalEventRaidMaster_o *)Instance;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v38 = 0.0;
  v39 = 1.0 / (float)v18;
  while ( (signed int)v37 < *(_DWORD *)(v32 + 24) )
  {
    v40 = v37 + 1;
    Instance = EventRaidMaster__TryGetEntity(v33, &entity, (int32_t)this[1].klass, v37 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_65;
    if ( !v34 )
      goto LABEL_101;
    Instance = TotalEventRaidMaster__TryGetEntity(v34, &v73, (int32_t)this[1].klass, v40, 0LL);
    if ( (Instance & 1) == 0 )
    {
LABEL_65:
      v44 = 0;
      goto LABEL_66;
    }
    if ( !entity || !v73 )
      goto LABEL_101;
    maxHp = entity->fields.maxHp;
    totalDamage = v73->fields.totalDamage;
    if ( v70 | (v40 < v19) )
    {
      if ( maxHp <= totalDamage )
        v44 = 1;
      else
        v44 = 2;
    }
    else
    {
      if ( v40 != v19 )
        goto LABEL_65;
      if ( maxHp > totalDamage )
      {
        v35 = entity->fields.maxHp;
        v51 = (double)totalDamage / (double)maxHp;
        v44 = 0;
        v38 = 1.0 - v51;
        v36 = v73->fields.totalDamage;
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !Instance )
          goto LABEL_101;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)Instance,
                                 (int32_t)this[1].klass,
                                 1,
                                 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
        v33 = v71;
        if ( !QuestIdListByGroupId )
          goto LABEL_101;
        v68 = maxHp;
        v46 = *(_QWORD *)&QuestIdListByGroupId->max_length;
        v69 = v18;
        if ( (int)v46 >= 1 )
        {
          v47 = (QuestReleaseMaster_o *)Instance;
          v44 = 0;
          v48 = 0LL;
          while ( v48 < (unsigned int)v46 )
          {
            if ( !v47 )
              goto LABEL_101;
            v49 = QuestIdListByGroupId->m_Items[v48 + 1];
            Instance = (int64_t)QuestReleaseMaster__GetEntity(v47, v49, 28, (int32_t)this[1].klass, v19, 0LL);
            if ( Instance )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !Instance )
                goto LABEL_101;
              Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v49, 0, 0LL);
              if ( (Instance & 1) != 0 )
                v44 = 1;
            }
            LODWORD(v46) = QuestIdListByGroupId->max_length;
            v33 = v71;
            if ( (__int64)++v48 >= (int)v46 )
              goto LABEL_73;
          }
LABEL_102:
          v67 = sub_B0D9A8(Instance);
          sub_B0D948(v67, 0LL);
        }
        v44 = 0;
LABEL_73:
        if ( !entity )
          goto LABEL_101;
        v36 = entity->fields.maxHp;
        v35 = v68;
        v18 = v69;
      }
    }
LABEL_66:
    v50 = *(_QWORD *)&this->fields.eventId;
    if ( !v50 )
      goto LABEL_101;
    if ( v37 >= *(_DWORD *)(v50 + 24) )
      goto LABEL_102;
    Instance = *(_QWORD *)(v50 + 8LL * (int)v37 + 32);
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v44, v41);
      v32 = *(_QWORD *)&this->fields.eventId;
      ++v37;
      if ( v32 )
        continue;
    }
    goto LABEL_101;
  }
  Instance = (int64_t)this->fields.raidDayComponents;
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70 == 0, 0LL);
  Instance = (int64_t)this->fields.raidDayComponents;
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_101;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
    v72 = v35 - v36;
    v53 = System_Int64__ToString((int64_t)&v72, 0LL);
    NumberFormat_32897236 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v53, 0LL);
    Instance = (int64_t)System_String__Format(v52, NumberFormat_32897236, 0LL);
    if ( this->fields.raidDayComponents )
    {
      UILabel__set_text((UILabel_o *)this->fields.raidDayComponents, (System_String_o *)Instance, 0LL);
      goto LABEL_85;
    }
LABEL_101:
    sub_B0D97C(Instance);
  }
LABEL_85:
  Instance = (int64_t)TitleInfoEventRaidHpComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    Instance = (int64_t)TitleInfoEventRaidHpComponent_TypeInfo;
  }
  dayFrameObj = (UIProgressBar_o *)this->fields.dayFrameObj;
  if ( !dayFrameObj )
    goto LABEL_101;
  mFG = dayFrameObj->fields.mFG;
  if ( !mFG )
    goto LABEL_101;
  v57 = *(_QWORD *)&this->fields.eventId;
  if ( !v57 )
    goto LABEL_101;
  v58 = (float)(v39 * (float)(v18 - v19)) + (float)(v39 * v38);
  v59 = (float)(**(float **)(Instance + 184) / (float)mFG->fields.mWidth) * (float)*(int *)(v57 + 24);
  v60 = UnityEngine_Mathf__Clamp01(v59, 0LL);
  UIProgressBar__set_value(dayFrameObj, v58 * v60, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_101;
  v61 = *(_QWORD *)(Instance + 48);
  if ( !v61 )
    goto LABEL_101;
  v62 = *(_QWORD *)&this->fields.eventId;
  if ( !v62 )
    goto LABEL_101;
  v63 = *(_DWORD *)(v62 + 24);
  v64 = (float)((float)*(int *)(v61 + 160) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  if ( v64 == INFINITY )
    v65 = -v64;
  else
    v65 = v64;
  if ( (int)v65 >= v63 )
    v59 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v59, 0LL);
}