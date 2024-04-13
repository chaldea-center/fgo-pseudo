void __fastcall TitleInfoEventRaidBossOldComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42ECC26 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidBossOldComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21971/*"raid_boss_icon_"*/, v8, v9, v10);
    byte_42ECC26 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21971/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21971/*"raid_boss_icon_"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_42ECC24 & 1) == 0 )
  {
    this = (TitleInfoEventRaidBossOldComponent_o *)sub_B5D5C4(
                                                     &UnityEngine_Object_TypeInfo,
                                                     (_DWORD)method,
                                                     (_DWORD)v2,
                                                     v3);
    byte_42ECC24 = 1;
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
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        v21 = *p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          if ( v11 >= v21->max_length )
          {
LABEL_30:
            v36 = sub_B5D6C8(this);
            sub_B5D668(v36, 0LL);
          }
          *(Il2CppClass **)((char *)&v21->obj.klass + v12) = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v21 + v12), 0LL, v15, v16, v17, v18, v19, v20);
          raidHpComponents = *p_raidHpComponents;
          ++v11;
          v12 += 8LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
LABEL_27:
      sub_B5D69C(this, method);
    }
    *p_raidHpComponents = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.raidHpComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
        UnityEngine_Object__Destroy_35620236(v28, 0LL);
        klass = p_eventId->klass;
        if ( p_eventId->klass )
        {
          if ( v25 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_30;
          *(void **)((char *)&klass->_1.image + v26) = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)((char *)klass + v26), 0LL, v29, v30, v31, v32, v33, v34);
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
    sub_B5D560(p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Component_o *gameObject; // x0
  __int64 v31; // x1
  struct UnityEngine_GameObject_o *leftPos; // x8
  struct TitleInfoEventRaidHpComponent_array *v33; // x0
  struct TitleInfoEventRaidHpComponent_array **p_raidHpComponents; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  unsigned __int64 v44; // x26
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidHpPrefab; // x21
  System_Int32_array **v46; // x21
  struct UnityEngine_GameObject_o *v47; // x8
  unsigned int *v48; // x27
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  EventRaidMaster_c *v55; // x0
  struct EventRaidMaster_StaticFields *static_fields; // x8
  System_Int32_array **v57; // x0
  int32_t *p_eventId; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  unsigned int *v65; // x8
  unsigned __int64 v66; // x20
  __int64 v67; // x27
  UnityEngine_UI_Dropdown_DropdownItem_o *titleInfoEventRaidDayObjs; // x22
  System_Int32_array **v69; // x22
  UnityEngine_GameObject_o *v70; // x23
  System_String_o *name; // x24
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  TitleInfoEventRaidHpComponent_c *v74; // x0
  unsigned int *v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  TitleInfoEventRaidHpComponent_c *v82; // x0
  UnityEngine_GameObject_o *raidBossIconSp; // x21
  __int64 v84; // x0
  __int64 v85; // x0
  int32_t OLD_RAID_DAY_COUNT; // [xsp+8h] [xbp-58h]
  int v87; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42ECC23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&EventRaidMaster_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&TitleInfoEventRaidDayComponent___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TitleInfoEventRaidHpComponent___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&TitleInfoEventRaidHpComponent_TypeInfo, v27, v28, v29);
    byte_42ECC23 = 1;
  }
  v87 = 0;
  TitleInfoEventRaidBossOldComponent__Destroy(this, *(const MethodInfo **)&eventId);
  leftPos = this->fields.leftPos;
  LODWORD(this[1].klass) = eventId;
  if ( !leftPos )
    goto LABEL_37;
  v33 = (struct TitleInfoEventRaidHpComponent_array *)sub_B5D5DC(
                                                        TitleInfoEventRaidDayComponent___TypeInfo,
                                                        LODWORD(leftPos[1].klass));
  this->fields.raidHpComponents = v33;
  p_raidHpComponents = &this->fields.raidHpComponents;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.raidHpComponents,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  raidHpComponents = this->fields.raidHpComponents;
  if ( !raidHpComponents )
    goto LABEL_37;
  v42 = 4LL;
  v43 = 8LL;
  while ( 1 )
  {
    v44 = v42 - 4;
    if ( v42 - 4 >= (int)raidHpComponents->max_length )
      break;
    titleInfoEventRaidHpPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidHpPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidHpPrefab,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidDayComponent___);
    if ( gameObject )
    {
      v46 = (System_Int32_array **)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      v47 = this->fields.leftPos;
      if ( v47 )
      {
        if ( v44 >= LODWORD(v47[1].klass) )
          goto LABEL_42;
        GameObjectExtensions__SafeSetParent_32436524(
          (UnityEngine_GameObject_o *)gameObject,
          *((UnityEngine_GameObject_o **)&v47->klass + v42),
          0LL);
        v48 = (unsigned int *)*p_raidHpComponents;
        if ( *p_raidHpComponents )
        {
          gameObject = (UnityEngine_Component_o *)sub_B5D684(v46, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( !gameObject )
          {
LABEL_43:
            v85 = sub_B5D6BC(gameObject);
            sub_B5D668(v85, 0LL);
          }
          if ( v44 >= v48[6] )
          {
LABEL_42:
            v84 = sub_B5D6C8(gameObject);
            sub_B5D668(v84, 0LL);
          }
          *(_QWORD *)&v48[2 * v42] = v46;
          sub_B5D560((BattleServantConfConponent_o *)&v48[v43], v46, v49, v50, v51, v52, v53, v54);
          raidHpComponents = *p_raidHpComponents;
          ++v42;
          v43 += 2LL;
          if ( *p_raidHpComponents )
            continue;
        }
      }
    }
    goto LABEL_37;
  }
  gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_37;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)gameObject,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v55 = EventRaidMaster_TypeInfo;
  if ( (BYTE3(EventRaidMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster_TypeInfo);
    v55 = EventRaidMaster_TypeInfo;
  }
  static_fields = v55->static_fields;
  OLD_RAID_DAY_COUNT = static_fields->OLD_RAID_DAY_COUNT;
  v57 = (System_Int32_array **)sub_B5D5DC(
                                 TitleInfoEventRaidHpComponent___TypeInfo,
                                 (unsigned int)static_fields->OLD_RAID_DAY_COUNT);
  *(_QWORD *)&this->fields.eventId = v57;
  p_eventId = &this->fields.eventId;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventId, v57, v59, v60, v61, v62, v63, v64);
  v65 = *(unsigned int **)&this->fields.eventId;
  if ( !v65 )
LABEL_37:
    sub_B5D69C(gameObject, v31);
  v66 = 0LL;
  v67 = 8LL;
  while ( (__int64)v66 < (int)v65[6] )
  {
    titleInfoEventRaidDayObjs = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.titleInfoEventRaidDayObjs;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              titleInfoEventRaidDayObjs,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_TitleInfoEventRaidHpComponent___);
    if ( !gameObject )
      goto LABEL_37;
    v69 = (System_Int32_array **)gameObject;
    v70 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v70, (UnityEngine_GameObject_o *)this->fields.hpBarSlider, 0LL);
    if ( !v70 )
      goto LABEL_37;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v70, 0LL);
    v87 = v66 + 1;
    v72 = System_Int32__ToString((int32_t)&v87, 0LL);
    v73 = System_String__Concat_44577788(name, v72, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v70, v73, 0LL);
    v74 = TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
      v74 = TitleInfoEventRaidHpComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v70, -(float)(v74->static_fields->WIDTH * (float)(int)v66), 0LL);
    v75 = *(unsigned int **)p_eventId;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
    gameObject = (UnityEngine_Component_o *)sub_B5D684(v69, *(_QWORD *)(*(_QWORD *)v75 + 64LL));
    if ( !gameObject )
      goto LABEL_43;
    if ( v66 >= v75[6] )
      goto LABEL_42;
    *(_QWORD *)&v75[2 * v66 + 8] = v69;
    sub_B5D560((BattleServantConfConponent_o *)&v75[v67], v69, v76, v77, v78, v79, v80, v81);
    v65 = *(unsigned int **)p_eventId;
    v67 += 2LL;
    ++v66;
    if ( !*(_QWORD *)p_eventId )
      goto LABEL_37;
  }
  v82 = TitleInfoEventRaidHpComponent_TypeInfo;
  raidBossIconSp = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
  if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    v82 = TitleInfoEventRaidHpComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    raidBossIconSp,
    -(float)(v82->static_fields->WIDTH * (float)(OLD_RAID_DAY_COUNT - 1)),
    0LL);
  ((void (__fastcall *)(TitleInfoEventRaidBossOldComponent_o *, Il2CppMethodPointer))this->klass->vtable._5_UpdateDisp.method)(
    this,
    this->klass->vtable._6_IsEventRaidBoss.methodPtr);
}


void __fastcall TitleInfoEventRaidBossOldComponent__UpdateDisp(
        TitleInfoEventRaidBossOldComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  EventRaidMaster_o *v43; // x20
  __int64 v44; // x8
  int32_t v45; // w22
  int32_t v46; // w24
  EventRaidEntity_o *v47; // x20
  int64_t v48; // x20
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x23
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct UnityEngine_GameObject_o *oneDayHpObj; // x20
  System_String_o *v53; // x23
  const MethodInfo *v54; // x4
  struct TitleInfoEventRaidHpComponent_array *raidHpComponents; // x8
  int32_t v56; // w20
  int32_t max_length; // w9
  __int64 v58; // x8
  EventRaidMaster_o *v59; // x20
  TotalEventRaidMaster_o *v60; // x23
  int64_t v61; // x28
  int64_t v62; // x27
  unsigned int v63; // w25
  float v64; // s10
  float v65; // s8
  int32_t v66; // w21
  const MethodInfo *v67; // x2
  int64_t maxHp; // x26
  int64_t totalDamage; // x8
  int32_t v70; // w26
  System_Int32_array *QuestIdListByGroupId; // x27
  __int64 v72; // x8
  QuestReleaseMaster_o *v73; // x28
  unsigned __int64 v74; // x22
  int32_t v75; // w20
  __int64 v76; // x8
  float v77; // s0
  System_String_o *v78; // x20
  System_String_o *v79; // x0
  Il2CppObject *NumberFormat_34103284; // x0
  UIProgressBar_o *dayFrameObj; // x20
  struct UIWidget_o *mFG; // x8
  __int64 v83; // x9
  float v84; // s10
  float v85; // s8
  float v86; // s0
  __int64 v87; // x9
  __int64 v88; // x8
  int v89; // w8
  float v90; // s0
  double v91; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v93; // x0
  int64_t v94; // [xsp+8h] [xbp-A8h]
  int32_t v95; // [xsp+18h] [xbp-98h]
  int v96; // [xsp+1Ch] [xbp-94h]
  EventRaidMaster_o *v97; // [xsp+28h] [xbp-88h]
  int64_t v98; // [xsp+30h] [xbp-80h] BYREF
  TotalEventRaidEntity_o *v99; // [xsp+38h] [xbp-78h] BYREF
  EventRaidEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_42ECC25 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TitleInfoEventRaidBossOldComponent_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&TitleInfoEventRaidHpComponent_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_13579/*"TITLE_INFO_RAID_TOTALHP"*/, v38, v39, v40);
    byte_42ECC25 = 1;
  }
  entity = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_101;
  v43 = (EventRaidMaster_o *)Instance;
  Instance = EventRaidMaster__GetCurrentDayOld((EventRaidMaster_o *)Instance, (int32_t)this[1].klass, 0LL);
  v44 = *(_QWORD *)&this->fields.eventId;
  if ( !v44 )
    goto LABEL_101;
  v45 = *(_DWORD *)(v44 + 24);
  v46 = Instance;
  v97 = v43;
  if ( (int)Instance <= 0 )
  {
    v47 = EventRaidMaster__GetEntity(v43, (int32_t)this[1].klass, v45, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    if ( !v47 )
      goto LABEL_101;
    if ( Instance < v47->fields.endedAt )
      return;
    v43 = v97;
    v46 = v45;
    v96 = 1;
  }
  else
  {
    v96 = 0;
  }
  Instance = (int64_t)EventRaidMaster__GetEntity(v43, (int32_t)this[1].klass, v46, 0LL);
  v48 = Instance;
  if ( (BYTE3(TitleInfoEventRaidBossOldComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossOldComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossOldComponent_TypeInfo);
  }
  if ( !v48 )
    goto LABEL_101;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossOldComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v50 = System_Int32__ToString((int)v48 + 48, 0LL);
  v51 = System_String__Concat_44577788(RAIDBOSS_ICON_SPNAME_PREFIX, v50, 0LL);
  oneDayHpObj = this->fields.oneDayHpObj;
  v53 = v51;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI((UISprite_o *)oneDayHpObj, v53, 0LL);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v96 == 0, 0LL);
  Instance = (int64_t)this->fields.totalHpLabel;
  if ( !Instance )
    goto LABEL_101;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    raidHpComponents = this->fields.raidHpComponents;
    if ( !raidHpComponents )
      goto LABEL_101;
    v56 = 0;
    while ( 1 )
    {
      max_length = raidHpComponents->max_length;
      if ( v56 >= max_length )
        break;
      if ( v56 >= (unsigned int)max_length )
        goto LABEL_102;
      Instance = (int64_t)raidHpComponents->m_Items[v56];
      if ( Instance )
      {
        TitleInfoEventRaidDayComponent__Setup(
          (TitleInfoEventRaidDayComponent_o *)Instance,
          v42,
          v46 - 1 + v56,
          v56,
          v54);
        raidHpComponents = this->fields.raidHpComponents;
        ++v56;
        if ( raidHpComponents )
          continue;
      }
      goto LABEL_101;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  v58 = *(_QWORD *)&this->fields.eventId;
  v59 = v97;
  if ( !v58 )
    goto LABEL_101;
  v60 = (TotalEventRaidMaster_o *)Instance;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v64 = 0.0;
  v65 = 1.0 / (float)v45;
  while ( (signed int)v63 < *(_DWORD *)(v58 + 24) )
  {
    v66 = v63 + 1;
    Instance = EventRaidMaster__TryGetEntity(v59, &entity, (int32_t)this[1].klass, v63 + 1, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_65;
    if ( !v60 )
      goto LABEL_101;
    Instance = TotalEventRaidMaster__TryGetEntity(v60, &v99, (int32_t)this[1].klass, v66, 0LL);
    if ( (Instance & 1) == 0 )
    {
LABEL_65:
      v70 = 0;
      goto LABEL_66;
    }
    if ( !entity || !v99 )
      goto LABEL_101;
    maxHp = entity->fields.maxHp;
    totalDamage = v99->fields.totalDamage;
    if ( v96 | (v66 < v46) )
    {
      if ( maxHp <= totalDamage )
        v70 = 1;
      else
        v70 = 2;
    }
    else
    {
      if ( v66 != v46 )
        goto LABEL_65;
      if ( maxHp > totalDamage )
      {
        v61 = entity->fields.maxHp;
        v77 = (double)totalDamage / (double)maxHp;
        v70 = 0;
        v64 = 1.0 - v77;
        v62 = v99->fields.totalDamage;
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !Instance )
          goto LABEL_101;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)Instance,
                                 (int32_t)this[1].klass,
                                 1,
                                 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
        v59 = v97;
        if ( !QuestIdListByGroupId )
          goto LABEL_101;
        v94 = maxHp;
        v72 = *(_QWORD *)&QuestIdListByGroupId->max_length;
        v95 = v45;
        if ( (int)v72 >= 1 )
        {
          v73 = (QuestReleaseMaster_o *)Instance;
          v70 = 0;
          v74 = 0LL;
          while ( v74 < (unsigned int)v72 )
          {
            if ( !v73 )
              goto LABEL_101;
            v75 = QuestIdListByGroupId->m_Items[v74 + 1];
            Instance = (int64_t)QuestReleaseMaster__GetEntity(v73, v75, 28, (int32_t)this[1].klass, v46, 0LL);
            if ( Instance )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !Instance )
                goto LABEL_101;
              Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v75, 0, 0LL);
              if ( (Instance & 1) != 0 )
                v70 = 1;
            }
            LODWORD(v72) = QuestIdListByGroupId->max_length;
            v59 = v97;
            if ( (__int64)++v74 >= (int)v72 )
              goto LABEL_73;
          }
LABEL_102:
          v93 = sub_B5D6C8(Instance);
          sub_B5D668(v93, 0LL);
        }
        v70 = 0;
LABEL_73:
        if ( !entity )
          goto LABEL_101;
        v62 = entity->fields.maxHp;
        v61 = v94;
        v45 = v95;
      }
    }
LABEL_66:
    v76 = *(_QWORD *)&this->fields.eventId;
    if ( !v76 )
      goto LABEL_101;
    if ( v63 >= *(_DWORD *)(v76 + 24) )
      goto LABEL_102;
    Instance = *(_QWORD *)(v76 + 8LL * (int)v63 + 32);
    if ( Instance )
    {
      TitleInfoEventRaidHpComponent__Setup((TitleInfoEventRaidHpComponent_o *)Instance, v70, v67);
      v58 = *(_QWORD *)&this->fields.eventId;
      ++v63;
      if ( v58 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v96 == 0, 0LL);
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
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_13579/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
    v98 = v61 - v62;
    v79 = System_Int64__ToString((int64_t)&v98, 0LL);
    NumberFormat_34103284 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v79, 0LL);
    Instance = (int64_t)System_String__Format(v78, NumberFormat_34103284, 0LL);
    if ( this->fields.raidDayComponents )
    {
      UILabel__set_text((UILabel_o *)this->fields.raidDayComponents, (System_String_o *)Instance, 0LL);
      goto LABEL_85;
    }
LABEL_101:
    sub_B5D69C(Instance, v42);
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
  v83 = *(_QWORD *)&this->fields.eventId;
  if ( !v83 )
    goto LABEL_101;
  v84 = (float)(v65 * (float)(v45 - v46)) + (float)(v65 * v64);
  v85 = (float)(**(float **)(Instance + 184) / (float)mFG->fields.mWidth) * (float)*(int *)(v83 + 24);
  v86 = UnityEngine_Mathf__Clamp01(v85, 0LL);
  UIProgressBar__set_value(dayFrameObj, v84 * v86, 0LL);
  Instance = (int64_t)this->fields.dayFrameObj;
  if ( !Instance )
    goto LABEL_101;
  v87 = *(_QWORD *)(Instance + 48);
  if ( !v87 )
    goto LABEL_101;
  v88 = *(_QWORD *)&this->fields.eventId;
  if ( !v88 )
    goto LABEL_101;
  v89 = *(_DWORD *)(v88 + 24);
  v90 = (float)((float)*(int *)(v87 + 160) / TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH) + 0.5;
  if ( v90 == INFINITY )
    v91 = -v90;
  else
    v91 = v90;
  if ( (int)v91 >= v89 )
    v85 = 1.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, v85, 0LL);
}