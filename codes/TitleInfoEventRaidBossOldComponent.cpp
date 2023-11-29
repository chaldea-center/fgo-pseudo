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

  if ( (byte_40FDFFE & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21586, v8);
    byte_40FDFFE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21586;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21586;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Object_o *gameObject; // x21
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
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Object_o *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_c *klass; // x8

  v8 = this;
  if ( (byte_40FDFFC & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDFFC = 1;
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
      v14 = *(UnityEngine_Component_o **)((char *)&raidHpComponents->obj.klass + v12);
      if ( v14 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        v21 = *p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          if ( v11 >= v21->max_length )
          {
LABEL_30:
            sub_B17100(this, method, v2);
            sub_B170A0();
          }
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v21 + v12), 0LL, v2, v16, v17, v18, v19, v20);
          raidHpComponents = *p_raidHpComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
LABEL_27:
      sub_B170D4();
    }
    *p_raidHpComponents = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields.raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
      v28 = *(UnityEngine_Component_o **)((char *)&v22->_1.image + v26);
      if ( v28 )
      {
        v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v29, 0LL);
        klass = p_eventId->klass;
        if ( p_eventId->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_30;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)((char *)klass + v26), 0LL, v2, v30, v31, v32, v33, v34);
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
    sub_B16F98(p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v13; // x2
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
  UnityEngine_Component_o *v28; // x0
  System_Int32_array **v29; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  struct UnityEngine_GameObject_o *v33; // x8
  unsigned int *v34; // x27
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WebViewManager_o *Instance; // x0
  __int64 v41; // x2
  EventRaidMaster_c *v42; // x0
  struct EventRaidMaster_StaticFields *static_fields; // x8
  System_Int32_array **v44; // x0
  int32_t *p_eventId; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  unsigned int *v52; // x8
  unsigned __int64 v53; // x20
  __int64 v54; // x27
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidDayObjs; // x22
  UnityEngine_Component_o *v56; // x0
  System_Int32_array **v57; // x22
  UnityEngine_GameObject_o *v58; // x23
  System_String_o *name; // x24
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  TitleInfoEventRaidHpComponent_c *v62; // x0
  unsigned int *v63; // x23
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  TitleInfoEventRaidHpComponent_c *v69; // x0
  UnityEngine_GameObject_o *raidBossIconSp; // x21
  int32_t OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-58h]
  int v72; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FDFFB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRaidMaster_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&TitleInfoEventRaidDayComponent___TypeInfo, v10);
    sub_B16FFC(&TitleInfoEventRaidHpComponent___TypeInfo, v11);
    sub_B16FFC(&TitleInfoEventRaidHpComponent_TypeInfo, v12);
    byte_40FDFFB = 1;
  }
  v72 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  leftPos = this->fields.leftPos;
  LODWORD(this[1].klass) = eventId;
  if ( !leftPos )
    goto LABEL_37;
  v15 = (struct TitleInfoEventRaidHpComponent_array *)sub_B17014(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(leftPos[1].klass),
                                                        v13);
  this->fields.raidHpComponents = v15;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_B16F98(
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
    v28 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       titleInfoEventRaidHpPrefab,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( v28 )
    {
      v29 = (System_Int32_array **)v28;
      gameObject = UnityEngine_Component__get_gameObject(v28, 0LL);
      v33 = this->fields.leftPos;
      if ( v33 )
      {
        if ( v26 >= LODWORD(v33[1].klass) )
          goto LABEL_42;
        GameObjectExtensions__SafeSetParent_27425996(gameObject, *((UnityEngine_GameObject_o **)&v33->klass + v24), 0LL);
        v34 = (unsigned int *)*p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_B170BC(v29, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !gameObject )
          {
LABEL_43:
            sub_B170F4(gameObject);
            sub_B170A0();
          }
          if ( v26 >= v34[6] )
          {
LABEL_42:
            sub_B17100(gameObject, v31, v32);
            sub_B170A0();
          }
          *(_QWORD *)&v34[2 * v24] = v29;
          sub_B16F98((BattleServantConfConponent_o *)&v34[v25], v29, v32, v35, v36, v37, v38, v39);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v42 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v42 = EventRaidMaster_TypeInfo;
  }
  static_fields = v42->static_fields;
  OLD_RAID_DAY_COUNT = static_fields->OLD_RAID_DAY_COUNT;
  v44 = (System_Int32_array **)sub_B17014(
                                 TitleInfoEventRaidHpComponent___TypeInfo,
                                 (unsigned int)static_fields->OLD_RAID_DAY_COUNT,
                                 v41);
  *(_QWORD *)&this->fields.eventId = v44;
  p_eventId = &this->fields.eventId;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventId, v44, v46, v47, v48, v49, v50, v51);
  v52 = *(unsigned int **)&this->fields.eventId;
  if ( !v52 )
LABEL_37:
    sub_B170D4();
  v53 = 0LL;
  v54 = 8LL;
  while ( (__int64)v53 < (int)v52[6] )
  {
    titleInfoEventRaidDayObjs = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidDayObjs;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v56 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       titleInfoEventRaidDayObjs,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !v56 )
      goto LABEL_37;
    v57 = (System_Int32_array **)v56;
    v58 = UnityEngine_Component__get_gameObject(v56, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v58, (UnityEngine_GameObject_o *)this->fields.hpBarSlider, 0LL);
    if ( !v58 )
      goto LABEL_37;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v58, 0LL);
    v72 = v53 + 1;
    v60 = System_Int32__ToString((int32_t)&v72, 0LL);
    v61 = System_String__Concat_43743732(name, v60, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v58, v61, 0LL);
    v62 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v62 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v58, -(float)(v62->static_fields->WIDTH * (float)(int)v53), 0LL);
    v63 = *(unsigned int **)p_eventId;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
    gameObject = (UnityEngine_GameObject_o *)sub_B170BC(v57, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
    if ( !gameObject )
      goto LABEL_43;
    if ( v53 >= v63[6] )
      goto LABEL_42;
    *(_QWORD *)&v63[2 * v53 + 8] = v57;
    sub_B16F98((BattleServantConfConponent_o *)&v63[v54], v57, v32, v64, v65, v66, v67, v68);
    v52 = *(unsigned int **)p_eventId;
    v54 += 2LL;
    ++v53;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
  }
  v69 = TitleInfoEventRaidHpComponent_TypeInfo;
  raidBossIconSp = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v69 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    raidBossIconSp,
    -(float)(v69->static_fields->WIDTH * (float)(OLD_RAID_DAY_COUNT - 1)),
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidMaster_o *v17; // x20
  int32_t CurrentDayOld; // w0
  __int64 v19; // x8
  int32_t v20; // w22
  int32_t v21; // w24
  EventRaidEntity_o *v22; // x20
  int64_t Time; // x0
  EventRaidEntity_o *v24; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  struct UnityEngine_GameObject_o *oneDayHpObj; // x20
  System_String_o *v29; // x23
  bool v30; // w0
  struct UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *v33; // x0
  QuestReleaseMaster_o *activeSelf; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x4
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t v39; // w20
  int32_t max_length; // w9
  TitleInfoEventRaidDayComponent_o *v41; // x0
  WebViewManager_o *v42; // x0
  WarQuestSelectionMaster_o *v43; // x0
  __int64 v44; // x8
  EventRaidMaster_o *v45; // x20
  TotalEventRaidMaster_o *v46; // x23
  int64_t v47; // x28
  int64_t v48; // x27
  unsigned int v49; // w25
  float v50; // s10
  float v51; // s8
  int32_t v52; // w21
  int64_t maxHp; // x26
  int64_t totalDamage; // x8
  int32_t v55; // w26
  WebViewManager_o *v56; // x0
  QuestGroupMaster_o *v57; // x0
  System_Int32_array *QuestIdListByGroupId; // x27
  WebViewManager_o *v59; // x0
  __int64 v60; // x8
  QuestReleaseMaster_o *v61; // x28
  unsigned __int64 v62; // x22
  int32_t v63; // w20
  clsQuestCheck_o *v64; // x0
  __int64 v65; // x8
  TitleInfoEventRaidHpComponent_o *v66; // x0
  float v67; // s0
  UnityEngine_Component_o *raidDayComponents; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  System_String_o *v72; // x20
  System_String_o *v73; // x0
  Il2CppObject *NumberFormat_23125544; // x0
  System_String_o *v75; // x0
  TitleInfoEventRaidHpComponent_c *v76; // x0
  UIProgressBar_o *dayFrameObj; // x20
  struct UIWidget_o *mFG; // x8
  __int64 v79; // x9
  float v80; // s10
  float v81; // s8
  float v82; // s0
  UnityEngine_Component_o *v83; // x0
  UnityEngine_Component_c *klass; // x9
  __int64 v85; // x8
  int v86; // w8
  float v87; // s0
  double v88; // d0
  UnityEngine_GameObject_o *v89; // x0
  int64_t v90; // [xsp+8h] [xbp-A8h]
  int32_t v91; // [xsp+18h] [xbp-98h]
  int v92; // [xsp+1Ch] [xbp-94h]
  EventRaidMaster_o *v93; // [xsp+28h] [xbp-88h]
  int64_t v94; // [xsp+30h] [xbp-80h] BYREF
  TotalEventRaidEntity_o *v95; // [xsp+38h] [xbp-78h] BYREF
  EventRaidEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_40FDFFD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v11);
    sub_B16FFC(&TitleInfoEventRaidBossOldComponent_TypeInfo, v12);
    sub_B16FFC(&TitleInfoEventRaidHpComponent_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_13367, v14);
    byte_40FDFFD = 1;
  }
  entity = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_101;
  v17 = MasterData_WarQuestSelectionMaster;
  CurrentDayOld = EventRaidMaster__GetCurrentDayOld(MasterData_WarQuestSelectionMaster, (int32_t)this[1].klass, 0LL);
  v19 = *(_QWORD *)&this->fields.eventId;
  if ( !v19 )
    goto LABEL_101;
  v20 = *(_DWORD *)(v19 + 24);
  v21 = CurrentDayOld;
  v93 = v17;
  if ( CurrentDayOld <= 0 )
  {
    v22 = EventRaidMaster__GetEntity(v17, (int32_t)this[1].klass, v20, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !v22 )
      goto LABEL_101;
    if ( Time < v22->fields.endedAt )
      return;
    v17 = v93;
    v21 = v20;
    v92 = 1;
  }
  else
  {
    v92 = 0;
  }
  v24 = EventRaidMaster__GetEntity(v17, (int32_t)this[1].klass, v21, 0LL);
  if ( (BYTE3(TitleInfoEventRaidBossOldComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  }
  if ( !v24 )
    goto LABEL_101;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v26 = System_Int32__ToString((int)v24 + 48, 0LL);
  v27 = System_String__Concat_43743732(RAIDBOSS_ICON_SPNAME_PREFIX, v26, 0LL);
  oneDayHpObj = this->fields.oneDayHpObj;
  v29 = v27;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v30 = AtlasManager__SetEventUI((UISprite_o *)oneDayHpObj, v29, 0LL);
  if ( !oneDayHpObj )
    goto LABEL_101;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)oneDayHpObj, v30, 0LL);
  v31 = this->fields.oneDayHpObj;
  if ( !v31 )
    goto LABEL_101;
  ((void (__fastcall *)(struct UnityEngine_GameObject_o *, void *))v31->klass[2]._1.typeMetadataHandle)(
    v31,
    v31->klass[2]._1.interopData);
  totalHpLabel = (UnityEngine_GameObject_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive(totalHpLabel, v92 == 0, 0LL);
  v33 = (UnityEngine_GameObject_o *)this->fields.totalHpLabel;
  if ( !v33 )
    goto LABEL_101;
  activeSelf = (QuestReleaseMaster_o *)UnityEngine_GameObject__get_activeSelf(v33, 0LL);
  if ( ((unsigned __int8)activeSelf & 1) != 0 )
  {
    raidHpComponents = this->fields.raidHpComponents;
    if ( !raidHpComponents )
      goto LABEL_101;
    v39 = 0;
    while ( 1 )
    {
      max_length = raidHpComponents->max_length;
      if ( v39 >= max_length )
        break;
      if ( v39 >= (unsigned int)max_length )
        goto LABEL_102;
      v41 = (TitleInfoEventRaidDayComponent_o *)raidHpComponents->m_Items[v39];
      if ( v41 )
      {
        TitleInfoEventRaidDayComponent__Setup(v41, v35, v21 - 1 + v39, v39, v37);
        raidHpComponents = this->fields.raidHpComponents;
        ++v39;
        if ( raidHpComponents )
          continue;
      }
      goto LABEL_101;
    }
  }
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_101;
  v43 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v42,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v44 = *(_QWORD *)&this->fields.eventId;
  v45 = v93;
  if ( !v44 )
    goto LABEL_101;
  v46 = (TotalEventRaidMaster_o *)v43;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v50 = 0.0;
  v51 = 1.0 / (float)v20;
  while ( (signed int)v49 < *(_DWORD *)(v44 + 24) )
  {
    v52 = v49 + 1;
    activeSelf = (QuestReleaseMaster_o *)EventRaidMaster__TryGetEntity(
                                           v45,
                                           &entity,
                                           (int32_t)this[1].klass,
                                           v49 + 1,
                                           0LL);
    if ( ((unsigned __int8)activeSelf & 1) == 0 )
      goto LABEL_65;
    if ( !v46 )
      goto LABEL_101;
    activeSelf = (QuestReleaseMaster_o *)TotalEventRaidMaster__TryGetEntity(v46, &v95, (int32_t)this[1].klass, v52, 0LL);
    if ( ((unsigned __int8)activeSelf & 1) == 0 )
    {
LABEL_65:
      v55 = 0;
      goto LABEL_66;
    }
    if ( !entity || !v95 )
      goto LABEL_101;
    maxHp = entity->fields.maxHp;
    totalDamage = v95->fields.totalDamage;
    if ( v92 | (v52 < v21) )
    {
      if ( maxHp <= totalDamage )
        v55 = 1;
      else
        v55 = 2;
    }
    else
    {
      if ( v52 != v21 )
        goto LABEL_65;
      if ( maxHp > totalDamage )
      {
        v47 = entity->fields.maxHp;
        v67 = (double)totalDamage / (double)maxHp;
        v55 = 0;
        v50 = 1.0 - v67;
        v48 = v95->fields.totalDamage;
      }
      else
      {
        v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v56 )
          goto LABEL_101;
        v57 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v56,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !v57 )
          goto LABEL_101;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v57, (int32_t)this[1].klass, 1, 0LL);
        v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v59 )
          goto LABEL_101;
        activeSelf = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v59,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
        v45 = v93;
        if ( !QuestIdListByGroupId )
          goto LABEL_101;
        v90 = maxHp;
        v60 = *(_QWORD *)&QuestIdListByGroupId->max_length;
        v91 = v20;
        if ( (int)v60 >= 1 )
        {
          v61 = activeSelf;
          v55 = 0;
          v62 = 0LL;
          while ( v62 < (unsigned int)v60 )
          {
            if ( !v61 )
              goto LABEL_101;
            v63 = QuestIdListByGroupId->m_Items[v62 + 1];
            activeSelf = (QuestReleaseMaster_o *)QuestReleaseMaster__GetEntity(
                                                   v61,
                                                   v63,
                                                   28,
                                                   (int32_t)this[1].klass,
                                                   v21,
                                                   0LL);
            if ( activeSelf )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v64 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v64 )
                goto LABEL_101;
              activeSelf = (QuestReleaseMaster_o *)clsQuestCheck__IsQuestClear(v64, v63, 0, 0LL);
              if ( ((unsigned __int8)activeSelf & 1) != 0 )
                v55 = 1;
            }
            LODWORD(v60) = QuestIdListByGroupId->max_length;
            v45 = v93;
            if ( (__int64)++v62 >= (int)v60 )
              goto LABEL_73;
          }
LABEL_102:
          sub_B17100(activeSelf, v35, v36);
          sub_B170A0();
        }
        v55 = 0;
LABEL_73:
        if ( !entity )
          goto LABEL_101;
        v48 = entity->fields.maxHp;
        v47 = v90;
        v20 = v91;
      }
    }
LABEL_66:
    v65 = *(_QWORD *)&this->fields.eventId;
    if ( !v65 )
      goto LABEL_101;
    if ( v49 >= *(_DWORD *)(v65 + 24) )
      goto LABEL_102;
    v66 = *(TitleInfoEventRaidHpComponent_o **)(v65 + 8LL * (int)v49 + 32);
    if ( v66 )
    {
      TitleInfoEventRaidHpComponent__Setup(v66, v55, v36);
      v44 = *(_QWORD *)&this->fields.eventId;
      ++v49;
      if ( v44 )
        continue;
    }
    goto LABEL_101;
  }
  raidDayComponents = (UnityEngine_Component_o *)this->fields.raidDayComponents;
  if ( !raidDayComponents )
    goto LABEL_101;
  gameObject = UnityEngine_Component__get_gameObject(raidDayComponents, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive(gameObject, v92 == 0, 0LL);
  v70 = (UnityEngine_Component_o *)this->fields.raidDayComponents;
  if ( !v70 )
    goto LABEL_101;
  v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
  if ( !v71 )
    goto LABEL_101;
  if ( UnityEngine_GameObject__get_activeSelf(v71, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_13367, 0LL);
    v94 = v47 - v48;
    v73 = System_Int64__ToString((int64_t)&v94, 0LL);
    NumberFormat_23125544 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v73, 0LL);
    v75 = System_String__Format(v72, NumberFormat_23125544, 0LL);
    if ( this->fields.raidDayComponents )
    {
      UILabel__set_text((UILabel_o *)this->fields.raidDayComponents, v75, 0LL);
      goto LABEL_85;
    }
LABEL_101:
    sub_B170D4();
  }
LABEL_85:
  v76 = TitleInfoEventRaidHpComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v76 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  dayFrameObj = (UIProgressBar_o *)this->fields.dayFrameObj;
  if ( !dayFrameObj )
    goto LABEL_101;
  mFG = dayFrameObj->fields.mFG;
  if ( !mFG )
    goto LABEL_101;
  v79 = *(_QWORD *)&this->fields.eventId;
  if ( !v79 )
    goto LABEL_101;
  v80 = (float)(v51 * (float)(v20 - v21)) + (float)(v51 * v50);
  v81 = (float)(v76->static_fields->WIDTH / (float)mFG->fields.mWidth) * (float)*(int *)(v79 + 24);
  v82 = UnityEngine_Mathf__Clamp01(v81, 0LL);
  UIProgressBar__set_value(dayFrameObj, v80 * v82, 0LL);
  v83 = (UnityEngine_Component_o *)this->fields.dayFrameObj;
  if ( !v83 )
    goto LABEL_101;
  klass = v83[2].klass;
  if ( !klass )
    goto LABEL_101;
  v85 = *(_QWORD *)&this->fields.eventId;
  if ( !v85 )
    goto LABEL_101;
  v86 = *(_DWORD *)(v85 + 24);
  v87 = (float)((float)SLODWORD(klass->_1.nestedTypes) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH)
      + 0.5;
  if ( v87 == INFINITY )
    v88 = -v87;
  else
    v88 = v87;
  if ( (int)v88 >= v86 )
    v81 = 1.0;
  v89 = UnityEngine_Component__get_gameObject(v83, 0LL);
  GameObjectExtensions__SetLocalScaleX(v89, v81, 0LL);
}