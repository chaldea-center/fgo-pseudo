void __fastcall TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDFCA & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventItemControl_TypeInfo, v1);
    byte_40FDFCA = 1;
  }
  TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM = 7;
}


void __fastcall TitleInfoEventItemControl___ctor(
        TitleInfoEventItemControl_o *this,
        TitleInfoControl_o *titleInfoControl,
        UnityEngine_GameObject_o *eventRoot,
        UIWidget_o *eventAlphaAnimRoot,
        UnityEngine_GameObject_o *alphaAnimChangeBtn,
        UnityEngine_GameObject_o *titleInfoEventItemPrefab,
        UnityEngine_GameObject_o *defeatCntAlphaAnimChangeBtn,
        const MethodInfo *method)
{
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x26
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_40FDFBD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__, titleInfoControl);
    sub_B16FFC(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo, v15);
    byte_40FDFBD = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo,
                                                                                                  titleInfoControl,
                                                                                                  eventRoot,
                                                                                                  eventAlphaAnimRoot,
                                                                                                  alphaAnimChangeBtn);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventInfoGroups,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.titleInfoControl = titleInfoControl;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)titleInfoControl,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.mEventRoot = eventRoot;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventRoot,
    (System_Int32_array **)eventRoot,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventAlphaAnimRoot,
    (System_Int32_array **)eventAlphaAnimRoot,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.alphaAnimChangeBtn,
    (System_Int32_array **)alphaAnimChangeBtn,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTitleInfoEventItemPrefab,
    (System_Int32_array **)titleInfoEventItemPrefab,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (System_Int32_array **)defeatCntAlphaAnimChangeBtn,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
}


void __fastcall TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x0

  if ( (byte_40FDFBE & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v6);
    byte_40FDFBE = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_38;
  transform = UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_37;
    v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v18);
LABEL_37:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v21 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_31;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_38:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mEventInfoGroups,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v9; // x3
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  TitleInfoEventItemControl_c *v11; // x0
  float v12; // s8
  TitleInfoControl_c *v13; // x0
  System_Func_float__float__float__float__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  AlphaTransitionCalculator_o *v19; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FDFC6 & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v6);
    sub_B16FFC(&TitleInfoEventItemControl_TypeInfo, v7);
    byte_40FDFC6 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL) )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(this, 0, eventId, v9);
    mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_16;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method)(
      mEventAlphaAnimRoot,
      mEventAlphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v11 = TitleInfoEventItemControl_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo);
      v11 = TitleInfoEventItemControl_TypeInfo;
    }
    v12 = ChangedFPSUtil__CovertFrameNumToSecond(v11->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
    v13 = TitleInfoControl_TypeInfo;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v13 = TitleInfoControl_TypeInfo;
    }
    v14 = ExtraEasing__AsymptoticSeriesFloat(
            v13->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0LL);
    v19 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v15, v16, v17, v18);
    AlphaTransitionCalculator___ctor(v19, v12, v14, 0LL);
    this->fields.ownEventItemUiAlphaCalculator = v19;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_ownEventItemUiAlphaCalculator,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_16:
      sub_B170D4();
    AlphaTransitionCalculator__MakeFadeInFinished(*p_ownEventItemUiAlphaCalculator, 0LL);
  }
}


bool __fastcall TitleInfoEventItemControl__IsEventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  if ( (byte_40FDFC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, method);
    byte_40FDFC2 = 1;
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B170D4();
  return mEventInfoGroups->fields._size > 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventItemControl__IsReprintLastWarRaid(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *ReprintLastWarRaidEventIdList; // x8
  int max_length; // w9
  unsigned int v7; // w10

  if ( (byte_40FDFC9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    byte_40FDFC9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  ReprintLastWarRaidEventIdList = v4->static_fields->ReprintLastWarRaidEventIdList;
  if ( !ReprintLastWarRaidEventIdList )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = BalanceConfig_TypeInfo;
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
      goto LABEL_22;
  }
  if ( !*(_QWORD *)&ReprintLastWarRaidEventIdList->max_length )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
LABEL_22:
      sub_B170D4();
  }
  max_length = ReprintLastWarRaidEventIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      sub_B17100(v4, *(_QWORD *)&eventId, method);
      sub_B170A0();
    }
    if ( ReprintLastWarRaidEventIdList->m_Items[v7 + 1] == eventId )
      break;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  return 1;
}


void __fastcall TitleInfoEventItemControl__NextDispEventInfoGroup(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v3);
}


void __fastcall TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AlphaTransitionCalculator_o *ownEventItemUiAlphaCalculator; // x0

  if ( (byte_40FDFC8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDFC8 = 1;
  }
  if ( TitleInfoEventItemControl__IsEventInfoGroups(this, method) )
  {
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    gameObject = UnityEngine_Component__get_gameObject(mEventAlphaAnimRoot, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      return;
    ownEventItemUiAlphaCalculator = this->fields.ownEventItemUiAlphaCalculator;
    if ( !ownEventItemUiAlphaCalculator )
LABEL_13:
      sub_B170D4();
    AlphaTransitionCalculator__MakeFadeOutFinished(ownEventItemUiAlphaCalculator, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetDispEventInfoGroup(
        TitleInfoEventItemControl_o *this,
        int32_t groupId,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  bool IsReprintLastWarRaid; // w21
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v15; // x22
  __int64 mEventInfoGroupIdx; // x23
  TitleInfoEventInfoComponent_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v19; // x0
  int v20; // w23
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v23; // x21
  __int64 v24; // x22
  UnityEngine_Component_o *v25; // x21
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *alphaAnimChangeBtn; // x0
  UnityEngine_GameObject_o *v31; // x0
  bool v32; // w1
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_40FDFC3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__,
      *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__, v11);
    this = (TitleInfoEventItemControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FDFC3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    goto LABEL_62;
  if ( mEventInfoGroups->fields._size < 1 )
    return;
  if ( (groupId & 0x80000000) != 0 )
    TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  else
    v6->fields.mEventInfoGroupIdx = groupId;
  IsReprintLastWarRaid = TitleInfoEventItemControl__IsReprintLastWarRaid(this, eventId, *(const MethodInfo **)&eventId);
  if ( IsReprintLastWarRaid )
  {
    v15 = v6->fields.mEventInfoGroups;
    if ( !v15 )
      goto LABEL_62;
    mEventInfoGroupIdx = v6->fields.mEventInfoGroupIdx;
    if ( v15->fields._size <= (unsigned int)mEventInfoGroupIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = v15->fields._items->m_Items[mEventInfoGroupIdx];
    if ( !v17 )
      goto LABEL_62;
    if ( ((*(__int64 (__fastcall **)(TitleInfoEventInfoComponent_o *, void *))&v17->klass[1]._1.byval_arg.bits)(
            v17,
            v17->klass[1]._1.this_arg.data) & 1) != 0 )
      TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, v18);
  }
  v19 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6->fields.mEventInfoGroups;
  if ( !v19 )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    v19,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v20 = 0;
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
  {
    current = v38.fields.current;
    if ( !IsReprintLastWarRaid )
    {
      if ( !v38.fields.current )
        sub_B170D4();
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38.fields.current, 0LL);
      if ( !gameObject )
        sub_B170D4();
      goto LABEL_24;
    }
    if ( !v38.fields.current )
      sub_B170D4();
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38.fields.current->klass->vtable[6].method)(
            v38.fields.current,
            v38.fields.current->klass->vtable[7].methodPtr) & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B170D4();
LABEL_24:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v20 |= ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[4].method)(
             current,
             current->klass->vtable[5].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  v23 = v6->fields.mEventInfoGroups;
  if ( !v23 )
    goto LABEL_62;
  v24 = v6->fields.mEventInfoGroupIdx;
  if ( v23->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v25 = (UnityEngine_Component_o *)v23->fields._items->m_Items[v24];
  if ( !v25 )
    goto LABEL_62;
  if ( (v20 & ~((unsigned int (__fastcall *)(UnityEngine_Component_o *, const char *))v25->klass[1]._1.gc_desc)(
                 v25,
                 v25->klass[1]._1.name) & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v26);
    return;
  }
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( LOBYTE(v25[1].klass) )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0LL, 0LL) )
    {
      v28 = v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( v28 )
      {
        v29 = UnityEngine_GameObject__get_gameObject(v28, 0LL);
        if ( v29 )
        {
          UnityEngine_GameObject__SetActive(v29, 1, 0LL);
          goto LABEL_41;
        }
      }
LABEL_62:
      sub_B170D4();
    }
LABEL_41:
    alphaAnimChangeBtn = v6->fields.alphaAnimChangeBtn;
    if ( !alphaAnimChangeBtn )
      goto LABEL_62;
    v31 = UnityEngine_GameObject__get_gameObject(alphaAnimChangeBtn, 0LL);
    if ( !v31 )
      goto LABEL_62;
    v32 = 0;
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0LL, 0LL) )
    {
      v33 = v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( !v33 )
        goto LABEL_62;
      v34 = UnityEngine_GameObject__get_gameObject(v33, 0LL);
      if ( !v34 )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive(v34, 0, 0LL);
    }
    v35 = v6->fields.alphaAnimChangeBtn;
    if ( !v35 )
      goto LABEL_62;
    v31 = UnityEngine_GameObject__get_gameObject(v35, 0LL);
    if ( !v31 )
      goto LABEL_62;
    v32 = 1;
  }
  UnityEngine_GameObject__SetActive(v31, v32, 0LL);
  if ( (((__int64 (__fastcall *)(UnityEngine_Component_o *, const char *))v25->klass[1]._1.gc_desc)(
          v25,
          v25->klass[1]._1.name) & 1) != 0 )
  {
    v36 = UnityEngine_Component__get_gameObject(v25, 0LL);
    if ( !v36 )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetEventGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t groupIdx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int size; // w9
  int32_t v7; // w8
  int32_t v8; // w9

  if ( (byte_40FDFC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, *(_QWORD *)&groupIdx);
    byte_40FDFC5 = 1;
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B170D4();
  size = mEventInfoGroups->fields._size;
  v7 = groupIdx - 1;
  if ( groupIdx - 1 >= size )
  {
    v7 = 0;
  }
  else
  {
    v8 = size - 1;
    if ( v7 < 0 )
      v7 = v8;
  }
  if ( this->fields.mEventInfoGroupIdx != groupIdx )
  {
    this->fields.mEventInfoGroupIdx = v7;
    TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(this, *(const MethodInfo **)&groupIdx);
  }
}


void __fastcall TitleInfoEventItemControl__SetNextEventInfoGroupIndex(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int32_t v4; // w8
  int32_t size; // w9
  int32_t v6; // w8

  if ( (byte_40FDFC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, method);
    byte_40FDFC4 = 1;
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  v4 = this->fields.mEventInfoGroupIdx + 1;
  this->fields.mEventInfoGroupIdx = v4;
  if ( !mEventInfoGroups )
    sub_B170D4();
  size = mEventInfoGroups->fields._size;
  if ( v4 >= size )
  {
    v6 = 0;
  }
  else
  {
    if ( (v4 & 0x80000000) == 0 )
      return;
    v6 = size - 1;
  }
  this->fields.mEventInfoGroupIdx = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetupEventItem(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidMaster_o *v14; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int32_t RaidGorupMax; // w0
  int v17; // w25
  bool IsSingleRaid; // w0
  const MethodInfo *v19; // x5

  if ( (byte_40FDFBF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FDFBF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  v14 = MasterData_WarQuestSelectionMaster;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      MasterData_WarQuestSelectionMaster,
                                      eventId,
                                      0LL);
  RaidGorupMax = EventRaidMaster__GetRaidGorupMax(v14, eventId, 0LL);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v17 = RaidGorupMax;
  IsSingleRaid = TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0LL);
  if ( v17 > 0 )
  {
LABEL_7:
    TitleInfoEventItemControl__SetupEventItemOnFixed(this, eventId, itemIds, dispTypes, titleImageId, v19);
    return;
  }
  if ( IsSingleRaid )
  {
    if ( EventRaidEntityArrayFromEventId )
    {
      if ( EventRaidEntityArrayFromEventId->max_length == 1 )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, dispTypes, titleImageId, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetupEventItemOnFixed(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o **p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WebViewManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x25
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v28; // x24
  TitleInfoEventItemComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v30; // x5
  System_Int32_array **v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40FDFC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FDFC0 = 1;
  }
  p_mEventItemInfo = (UnityEngine_Component_o **)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0LL, 0LL) )
  {
    if ( !*p_mEventItemInfo )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mEventItemInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_mEventItemInfo = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.mEventItemInfo, 0LL, v18, v19, v20, v21, v22, v23);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v28 = v26;
  GameObjectExtensions__SafeSetParent_27425996(v26, mEventRoot, 0LL);
  if ( !v28
    || (Component_srcLineSprite = (TitleInfoEventItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v28,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v31 = (System_Int32_array **)Component_srcLineSprite;
  TitleInfoEventItemComponent__Setup(Component_srcLineSprite, itemIds, dispTypes, eventId, titleImageId, v30);
  *p_mEventItemInfo = (UnityEngine_Component_o *)v31;
  sub_B16F98((BattleServantConfConponent_o *)p_mEventItemInfo, v31, v32, v33, v34, v35, v36, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetupEventItemOnLoop(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x24
  UnityEngine_GameObject_o *v18; // x24
  TitleInfoEventItemComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x0

  if ( (byte_40FDFC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FDFC1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v18, (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot, 0LL);
  if ( !v18
    || (Component_srcLineSprite = (TitleInfoEventItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v18,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL
    || (v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        TitleInfoEventItemComponent__Setup(Component_srcLineSprite, itemIds, dispTypes, eventId, titleImageId, v20),
        (mEventInfoGroups = this->fields.mEventInfoGroups) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mEventInfoGroups,
    v21,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v10; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  CommonUI_o *Instance; // x0
  CommonUI_o *v13; // x0
  AlphaTransitionCalculator_o *v14; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v17; // s8
  TitleInfoControl_c *v18; // x0
  AlphaTransitionCalculator_o *v19; // x0
  AlphaTransitionCalculator_o *v20; // x0
  AlphaTransitionCalculator_o *v21; // x0
  const MethodInfo *v22; // x3
  System_Action_o *onChangedEventGroup; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct AlphaTransitionCalculator_o *v30; // x8
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  AlphaTransitionCalculator_o *v32; // x0

  if ( (byte_40FDFC7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v6);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v7);
    sub_B16FFC(&Method_TransitionCalculator_float__get_Current__, v8);
    byte_40FDFC7 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v10) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_36;
        if ( !CommonUI__IsActive_UserPresentBoxWindow(Instance, 0LL) )
        {
          v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v13 )
            goto LABEL_36;
          if ( !CommonUI__IsActive_MasterMission(v13, 0LL) )
          {
            v14 = this->fields.ownEventItemUiAlphaCalculator;
            if ( !v14 )
              goto LABEL_36;
            if ( AlphaTransitionCalculator__IsFadeInFinished(v14, 0LL) )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              mEventAlphaAnimTimeOld = this->fields.mEventAlphaAnimTimeOld;
              v17 = realtimeSinceStartup;
              v18 = TitleInfoControl_TypeInfo;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                v18 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v17 - mEventAlphaAnimTimeOld) >= v18->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
              {
                v19 = this->fields.ownEventItemUiAlphaCalculator;
                if ( !v19 )
                  goto LABEL_36;
                AlphaTransitionCalculator__StartFadeOut(v19, 0LL);
              }
            }
          }
        }
      }
      v20 = this->fields.ownEventItemUiAlphaCalculator;
      if ( v20 )
      {
        if ( AlphaTransitionCalculator__IsFadeOutFinished(v20, 0LL) )
        {
          v21 = this->fields.ownEventItemUiAlphaCalculator;
          if ( !v21 )
            goto LABEL_36;
          AlphaTransitionCalculator__StartFadeIn(v21, 0LL);
          this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v22);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
            0LL,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          ActionExtensions__Call(onChangedEventGroup, 0LL);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v30 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v30 )
        {
          mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
          if ( mEventAlphaAnimRoot )
          {
            ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method)(
              mEventAlphaAnimRoot,
              mEventAlphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
              v30->fields._Current_k__BackingField);
            if ( !this->fields.alphaAnimForceDisp )
              return;
            v32 = this->fields.ownEventItemUiAlphaCalculator;
            if ( v32 )
            {
              if ( AlphaTransitionCalculator__IsFadeInFinished(v32, 0LL) && this->fields.alphaAnimForceNextCheck )
                *(_WORD *)&this->fields.alphaAnimForceDisp = 0;
              return;
            }
          }
        }
      }
LABEL_36:
      sub_B170D4();
    }
  }
}


bool __fastcall TitleInfoEventItemControl__get_AlphaAnimForceDisp(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimForceDisp;
}


bool __fastcall TitleInfoEventItemControl__get_AlphaAnimForceNextCheck(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimForceNextCheck;
}


UIWidget_o *__fastcall TitleInfoEventItemControl__get_EventAlphaAnimRoot(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventAlphaAnimRoot;
}


float __fastcall TitleInfoEventItemControl__get_EventAlphaAnimTimeOld(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventAlphaAnimTimeOld;
}


int32_t __fastcall TitleInfoEventItemControl__get_EventInfoGroupIdx(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventInfoGroupIdx;
}


System_Collections_Generic_List_TitleInfoEventInfoComponent__o *__fastcall TitleInfoEventItemControl__get_EventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventInfoGroups;
}


bool __fastcall TitleInfoEventItemControl__get_IsPauseEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsPauseEventAlphaAnim;
}


System_Action_o *__fastcall TitleInfoEventItemControl__get_OnChangedEventGroupAction(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.onChangedEventGroup;
}


void __fastcall TitleInfoEventItemControl__set_AlphaAnimForceDisp(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.alphaAnimForceDisp = value;
}


void __fastcall TitleInfoEventItemControl__set_AlphaAnimForceNextCheck(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.alphaAnimForceNextCheck = value;
}


void __fastcall TitleInfoEventItemControl__set_EventAlphaAnimTimeOld(
        TitleInfoEventItemControl_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.mEventAlphaAnimTimeOld = value;
}


void __fastcall TitleInfoEventItemControl__set_EventInfoGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.mEventInfoGroupIdx = value;
}


void __fastcall TitleInfoEventItemControl__set_EventInfoGroups(
        TitleInfoEventItemControl_o *this,
        System_Collections_Generic_List_TitleInfoEventInfoComponent__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mEventInfoGroups = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventInfoGroups,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventItemControl__set_IsPauseEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.mIsPauseEventAlphaAnim = value;
}


void __fastcall TitleInfoEventItemControl__set_OnChangedEventGroupAction(
        TitleInfoEventItemControl_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onChangedEventGroup = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}