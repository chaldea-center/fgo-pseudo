void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B4458 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_B52984(&StringLiteral_21858/*"raid_boss_icon_"*/);
    byte_42B4458 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21858/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21858/*"raid_boss_icon_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  if ( (byte_42B4456 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4456 = 1;
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
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
        v21 = *p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          if ( v11 >= v21->max_length )
          {
LABEL_30:
            v36 = sub_B52A88(this);
            sub_B52A28(v36, 0LL);
          }
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_B52920((BattleServantConfConponent_o *)((char *)v21 + v12), 0LL, v15, v16, v17, v18, v19, v20);
          raidHpComponents = *p_raidHpComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
LABEL_27:
      sub_B52A5C(this, method);
    }
    *p_raidHpComponents = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v8->fields.raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
        UnityEngine_Object__Destroy_35616956(v28, 0LL);
        klass = p_eventId->klass;
        if ( p_eventId->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_30;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_B52920((BattleServantConfConponent_o *)((char *)klass + v26), 0LL, v29, v30, v31, v32, v33, v34);
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
    sub_B52920(p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct UnityEngine_GameObject_o *leftPos; // x8
  struct TitleInfoEventRaidHpComponent_array *v8; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  unsigned __int64 v19; // x26
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidHpPrefab; // x21
  System_Int32_array **v21; // x21
  struct UnityEngine_GameObject_o *v22; // x8
  unsigned int *v23; // x27
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EventRaidMaster_c *v30; // x0
  struct EventRaidMaster_StaticFields *static_fields; // x8
  System_Int32_array **v32; // x0
  int32_t *p_eventId; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  unsigned int *v40; // x8
  unsigned __int64 v41; // x20
  __int64 v42; // x27
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidDayObjs; // x22
  System_Int32_array **v44; // x22
  UnityEngine_GameObject_o *v45; // x23
  System_String_o *name; // x24
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  TitleInfoEventRaidHpComponent_c *v49; // x0
  unsigned int *v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  TitleInfoEventRaidHpComponent_c *v57; // x0
  UnityEngine_GameObject_o *raidBossIconSp; // x21
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-58h]
  int v62; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B4455 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&EventRaidMaster_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TitleInfoEventRaidDayComponent___TypeInfo);
    sub_B52984(&TitleInfoEventRaidHpComponent___TypeInfo);
    sub_B52984(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_42B4455 = 1;
  }
  v62 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  leftPos = this->fields.leftPos;
  LODWORD(this[1].klass) = eventId;
  if ( !leftPos )
    goto LABEL_37;
  v8 = (struct TitleInfoEventRaidHpComponent_array *)sub_B5299C(
                                                       TitleInfoEventRaidDayComponent___TypeInfo,
                                                       LODWORD(leftPos[1].klass));
  this->fields.raidHpComponents = v8;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.raidHpComponents,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_37;
  v17 = 4LL;
  v18 = 8LL;
  while ( 1 )
  {
    v19 = v17 - 4;
    if ( v17 - 4 >= (int)raidHpComponents->max_length )
      break;
    titleInfoEventRaidHpPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidHpPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v21 = (System_Int32_array **)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v22 = this->fields.leftPos;
      if ( v22 )
      {
        if ( v19 >= LODWORD(v22[1].klass) )
          goto LABEL_42;
        GameObjectExtensions__SafeSetParent_32091088(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v22->klass + v17),
          0LL);
        v23 = (unsigned int *)*p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_B52A44(v21, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !gameObject )
          {
LABEL_43:
            v60 = sub_B52A7C(gameObject);
            sub_B52A28(v60, 0LL);
          }
          if ( v19 >= v23[6] )
          {
LABEL_42:
            v59 = sub_B52A88(gameObject);
            sub_B52A28(v59, 0LL);
          }
          *(_QWORD *)&v23[2 * v17] = v21;
          sub_B52920((BattleServantConfConponent_o *)&v23[v18], v21, v24, v25, v26, v27, v28, v29);
          raidHpComponents = *p_raidHpComponents;
          ++v17;
          v18 += 2LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
    }
    goto LABEL_37;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_37;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)gameObject,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v30 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v30 = EventRaidMaster_TypeInfo;
  }
  static_fields = v30->static_fields;
  OLD_RAID_DAY_COUNT = static_fields->OLD_RAID_DAY_COUNT;
  v32 = (System_Int32_array **)sub_B5299C(
                                 TitleInfoEventRaidHpComponent___TypeInfo,
                                 (unsigned int)static_fields->OLD_RAID_DAY_COUNT);
  *(_QWORD *)&this->fields.eventId = v32;
  p_eventId = &this->fields.eventId;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.eventId, v32, v34, v35, v36, v37, v38, v39);
  v40 = *(unsigned int **)&this->fields.eventId;
  if ( !v40 )
LABEL_37:
    sub_B52A5C(gameObject, v6);
  v41 = 0LL;
  v42 = 8LL;
  while ( (__int64)v41 < (int)v40[6] )
  {
    titleInfoEventRaidDayObjs = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidDayObjs;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidDayObjs,
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_37;
    v44 = (System_Int32_array **)gameObject;
    v45 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_32091088(v45, (UnityEngine_GameObject_o *)this->fields.hpBarSlider, 0LL);
    if ( !v45 )
      goto LABEL_37;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0LL);
    v62 = v41 + 1;
    v47 = System_Int32__ToString((int32_t)&v62, 0LL);
    v48 = System_String__Concat_44568316(name, v47, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v45, v48, 0LL);
    v49 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v49 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v45, -(float)(v49->static_fields->WIDTH * (float)(int)v41), 0LL);
    v50 = *(unsigned int **)p_eventId;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
    gameObject = (UnityEngine_Component_o *)sub_B52A44(v44, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
    if ( !gameObject )
      goto LABEL_43;
    if ( v41 >= v50[6] )
      goto LABEL_42;
    *(_QWORD *)&v50[2 * v41 + 8] = v44;
    sub_B52920((BattleServantConfConponent_o *)&v50[v42], v44, v51, v52, v53, v54, v55, v56);
    v40 = *(unsigned int **)p_eventId;
    v42 += 2LL;
    ++v41;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
  }
  v57 = TitleInfoEventRaidHpComponent_TypeInfo;
  raidBossIconSp = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v57 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    raidBossIconSp,
    -(float)(v57->static_fields->WIDTH * (float)(OLD_RAID_DAY_COUNT - 1)),
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
  __int64 v6; // x8
  int32_t v7; // w22
  int32_t v8; // w24
  EventRaidEntity_o *v9; // x20
  int64_t v10; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x23
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  struct UnityEngine_GameObject_o *oneDayHpObj; // x20
  System_String_o *v15; // x23
  const MethodInfo *v16; // x4
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t v18; // w20
  int32_t max_length; // w9
  __int64 v20; // x8
  EventRaidMaster_o *v21; // x20
  TotalEventRaidMaster_o *v22; // x23
  int64_t v23; // x28
  int64_t v24; // x27
  unsigned int v25; // w25
  float v26; // s10
  float v27; // s8
  int32_t v28; // w21
  const MethodInfo *v29; // x2
  int64_t maxHp; // x26
  int64_t totalDamage; // x8
  int32_t v32; // w26
  System_Int32_array *QuestIdListByGroupId; // x27
  __int64 v34; // x8
  QuestReleaseMaster_o *v35; // x28
  unsigned __int64 v36; // x22
  int32_t v37; // w20
  __int64 v38; // x8
  float v39; // s0
  System_String_o *v40; // x20
  System_String_o *v41; // x0
  Il2CppObject *NumberFormat_34073440; // x0
  UIProgressBar_o *dayFrameObj; // x20
  struct UIWidget_o *mFG; // x8
  __int64 v45; // x9
  float v46; // s10
  float v47; // s8
  float v48; // s0
  __int64 v49; // x9
  __int64 v50; // x8
  int v51; // w8
  float v52; // s0
  double v53; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x0
  int64_t v56; // [xsp+8h] [xbp-A8h]
  int32_t v57; // [xsp+18h] [xbp-98h]
  int v58; // [xsp+1Ch] [xbp-94h]
  EventRaidMaster_o *v59; // [xsp+28h] [xbp-88h]
  int64_t v60; // [xsp+30h] [xbp-80h] BYREF
  TotalEventRaidEntity_o *v61; // [xsp+38h] [xbp-78h] BYREF
  EventRaidEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_42B4457 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossOldComponent_TypeInfo);
    sub_B52984(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_B52984(&StringLiteral_13520/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_42B4457 = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_101;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, (int32_t)this[1].klass, 0LL);
  v6 = *(_QWORD *)&this->fields.eventId;
  if ( !v6 )
    goto LABEL_101;
  v7 = *(_DWORD *)(v6 + 24);
  v8 = Instance;
  v59 = v5;
  if ( (int)Instance <= 0 )
  {
    v9 = EventRaidMaster__GetEntity(v5, (int32_t)this[1].klass, v7, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    if ( !v9 )
      goto LABEL_101;
    if ( Instance < v9->fields.endedAt )
      return;
    v5 = v59;
    v8 = v7;
    v58 = 1;
  }
  else
  {
    v58 = 0;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v5, (int32_t)this[1].klass, v8, 0LL);
  v10 = Instance;
  if ( (BYTE3(TitleInfoEventRaidBossOldComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  }
  if ( !v10 )
    goto LABEL_101;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v12 = System_Int32__ToString((int)v10 + 48, 0LL);
  v13 = System_String__Concat_44568316(RAIDBOSS_ICON_SPNAME_PREFIX, v12, 0LL);
  oneDayHpObj = this->fields.oneDayHpObj;
  v15 = v13;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI((UISprite_o *)oneDayHpObj, v15, 0LL);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v58 == 0, 0LL);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_101;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidHpComponents = this->fields.raidHpComponents;
    if ( !raidHpComponents )
      goto LABEL_101;
    v18 = 0;
    while ( 1 )
    {
      max_length = raidHpComponents->max_length;
      if ( v18 >= max_length )
        break;
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_102;
      Instance = (int64_t)raidHpComponents->m_Items[v18];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup((TitleInfoEventRaidDayComponent_o *)Instance, v4, v8 - 1 + v18, v18, v16);
        raidHpComponents = this->fields.raidHpComponents;
        ++v18;
        if ( raidHpComponents )
          continue;
      }
      goto LABEL_101;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v20 = *(_QWORD *)&this->fields.eventId;
  v21 = v59;
  if ( !v20 )
    goto LABEL_101;
  v22 = (TotalEventRaidMaster_o *)Instance;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v26 = 0.0;
  v27 = 1.0 / (float)v7;
  while ( (signed int)v25 < *(_DWORD *)(v20 + 24) )
  {
    v28 = v25 + 1;
    Instance = EventRaidMaster__TryGetEntity(v21, &entity, (int32_t)this[1].klass, v25 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_65;
    if ( !v22 )
      goto LABEL_101;
    Instance = TotalEventRaidMaster__TryGetEntity(v22, &v61, (int32_t)this[1].klass, v28, 0LL);
    if ( (Instance & 1) == 0 )
    {
LABEL_65:
      v32 = 0;
      goto LABEL_66;
    }
    if ( !entity || !v61 )
      goto LABEL_101;
    maxHp = entity->fields.maxHp;
    totalDamage = v61->fields.totalDamage;
    if ( v58 | (v28 < v8) )
    {
      if ( maxHp <= totalDamage )
        v32 = 1;
      else
        v32 = 2;
    }
    else
    {
      if ( v28 != v8 )
        goto LABEL_65;
      if ( maxHp > totalDamage )
      {
        v23 = entity->fields.maxHp;
        v39 = (double)totalDamage / (double)maxHp;
        v32 = 0;
        v26 = 1.0 - v39;
        v24 = v61->fields.totalDamage;
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !Instance )
          goto LABEL_101;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)Instance,
                                 (int32_t)this[1].klass,
                                 1,
                                 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
        v21 = v59;
        if ( !QuestIdListByGroupId )
          goto LABEL_101;
        v56 = maxHp;
        v34 = *(_QWORD *)&QuestIdListByGroupId->max_length;
        v57 = v7;
        if ( (int)v34 >= 1 )
        {
          v35 = (QuestReleaseMaster_o *)Instance;
          v32 = 0;
          v36 = 0LL;
          while ( v36 < (unsigned int)v34 )
          {
            if ( !v35 )
              goto LABEL_101;
            v37 = QuestIdListByGroupId->m_Items[v36 + 1];
            Instance = (int64_t)QuestReleaseMaster__GetEntity(v35, v37, 28, (int32_t)this[1].klass, v8, 0LL);
            if ( Instance )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !Instance )
                goto LABEL_101;
              Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v37, 0, 0LL);
              if ( (Instance & 1) != 0 )
                v32 = 1;
            }
            LODWORD(v34) = QuestIdListByGroupId->max_length;
            v21 = v59;
            if ( (__int64)++v36 >= (int)v34 )
              goto LABEL_73;
          }
LABEL_102:
          v55 = sub_B52A88(Instance);
          sub_B52A28(v55, 0LL);
        }
        v32 = 0;
LABEL_73:
        if ( !entity )
          goto LABEL_101;
        v24 = entity->fields.maxHp;
        v23 = v56;
        v7 = v57;
      }
    }
LABEL_66:
    v38 = *(_QWORD *)&this->fields.eventId;
    if ( !v38 )
      goto LABEL_101;
    if ( v25 >= *(_DWORD *)(v38 + 24) )
      goto LABEL_102;
    Instance = *(_QWORD *)(v38 + 8LL * (int)v25 + 32);
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v32, v29);
      v20 = *(_QWORD *)&this->fields.eventId;
      ++v25;
      if ( v20 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v58 == 0, 0LL);
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
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13520/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
    v60 = v23 - v24;
    v41 = System_Int64__ToString((int64_t)&v60, 0LL);
    NumberFormat_34073440 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34073440(v41, 0LL);
    Instance = (int64_t)System_String__Format(v40, NumberFormat_34073440, 0LL);
    if ( this->fields.raidDayComponents )
    {
      UILabel__set_text((UILabel_o *)this->fields.raidDayComponents, (System_String_o *)Instance, 0LL);
      goto LABEL_85;
    }
LABEL_101:
    sub_B52A5C(Instance, v4);
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
  v45 = *(_QWORD *)&this->fields.eventId;
  if ( !v45 )
    goto LABEL_101;
  v46 = (float)(v27 * (float)(v7 - v8)) + (float)(v27 * v26);
  v47 = (float)(**(float **)(Instance + 184) / (float)mFG->fields.mWidth) * (float)*(int *)(v45 + 24);
  v48 = UnityEngine_Mathf__Clamp01(v47, 0LL);
  UIProgressBar__set_value(dayFrameObj, v46 * v48, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_101;
  v49 = *(_QWORD *)(Instance + 48);
  if ( !v49 )
    goto LABEL_101;
  v50 = *(_QWORD *)&this->fields.eventId;
  if ( !v50 )
    goto LABEL_101;
  v51 = *(_DWORD *)(v50 + 24);
  v52 = (float)((float)*(int *)(v49 + 160) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  if ( v52 == INFINITY )
    v53 = -v52;
  else
    v53 = v52;
  if ( (int)v53 >= v51 )
    v47 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v47, 0LL);
}