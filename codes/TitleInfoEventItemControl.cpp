void __fastcall TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECBF1 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventItemControl_TypeInfo, v1, v2, v3);
    byte_42ECBF1 = 1;
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x26
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42ECBE4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__,
      (_DWORD)titleInfoControl,
      (_DWORD)eventRoot,
      eventAlphaAnimRoot);
    sub_B5D5C4(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo, v15, v16, v17);
    byte_42ECBE4 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEventInfoGroups,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.titleInfoControl = titleInfoControl;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)titleInfoControl,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.mEventRoot = eventRoot;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEventRoot,
    (System_Int32_array **)eventRoot,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEventAlphaAnimRoot,
    (System_Int32_array **)eventAlphaAnimRoot,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.alphaAnimChangeBtn,
    (System_Int32_array **)alphaAnimChangeBtn,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTitleInfoEventItemPrefab,
    (System_Int32_array **)titleInfoEventItemPrefab,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (System_Int32_array **)defeatCntAlphaAnimChangeBtn,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
}


void __fastcall TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_IEnumerator_c *v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  __int64 v37; // x20
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_42ECBE5 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v14, v15, v16);
    byte_42ECBE5 = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_38;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0LL);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
    }
    else
    {
LABEL_17:
      v29 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
    }
    v30 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_37;
    v32 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (UnityEngine_Transform_c *)v30->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_37:
      sub_B5D69C(v30, v31);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v34 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v36 = *(_QWORD *)v34;
    v37 = v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_31;
      }
      v40 = v36 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_31:
      v40 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventInfoGroups;
  if ( !mEventAlphaAnimRoot )
LABEL_38:
    sub_B5D69C(mEventAlphaAnimRoot, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mEventAlphaAnimRoot,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
}


void __fastcall TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
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
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  TitleInfoEventItemControl_c *v19; // x0
  float v20; // s8
  TitleInfoControl_c *v21; // x0
  System_Func_float__float__float__float__o *v22; // x20
  AlphaTransitionCalculator_o *v23; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42ECBED & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TitleInfoControl_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventItemControl_TypeInfo, v12, v13, v14);
    byte_42ECBED = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL) )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(this, 0, eventId, v16);
    mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_16;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method)(
      mEventAlphaAnimRoot,
      mEventAlphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v19 = TitleInfoEventItemControl_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo);
      v19 = TitleInfoEventItemControl_TypeInfo;
    }
    v20 = ChangedFPSUtil__CovertFrameNumToSecond(v19->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
    v21 = TitleInfoControl_TypeInfo;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v21 = TitleInfoControl_TypeInfo;
    }
    v22 = ExtraEasing__AsymptoticSeriesFloat(
            v21->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0LL);
    v23 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v23, v20, v22, 0LL);
    this->fields.ownEventItemUiAlphaCalculator = v23;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_ownEventItemUiAlphaCalculator,
      (System_Int32_array **)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_16:
      sub_B5D69C(mEventAlphaAnimRoot, v17);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
  }
}


bool __fastcall TitleInfoEventItemControl__IsEventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventItemControl_o *v4; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v4 = this;
  if ( (byte_42ECBE9 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42ECBE9 = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B5D69C(this, method);
  return mEventInfoGroups->fields._size > 1;
}


bool __fastcall TitleInfoEventItemControl__IsReprintLastWarRaid(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *ReprintLastWarRaidEventIdList; // x8
  __int64 v7; // x1
  int max_length; // w9
  unsigned int v9; // w10
  __int64 v11; // x0

  if ( (byte_42ECBF0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42ECBF0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  ReprintLastWarRaidEventIdList = v5->static_fields->ReprintLastWarRaidEventIdList;
  if ( !ReprintLastWarRaidEventIdList )
    return 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = BalanceConfig_TypeInfo;
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
      goto LABEL_22;
  }
  if ( !*(_QWORD *)&ReprintLastWarRaidEventIdList->max_length )
    return 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
LABEL_22:
      sub_B5D69C(v5, v7);
  }
  max_length = ReprintLastWarRaidEventIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B5D6C8(v5);
      sub_B5D668(v11, 0LL);
    }
    if ( ReprintLastWarRaidEventIdList->m_Items[v9 + 1] == eventId )
      break;
    if ( (int)++v9 >= max_length )
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0

  if ( (byte_42ECBEF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBEF = 1;
  }
  if ( TitleInfoEventItemControl__IsEventInfoGroups(this, method) )
  {
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEventAlphaAnimRoot, 0LL);
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mEventAlphaAnimRoot, 0LL) )
      return;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( !mEventAlphaAnimRoot )
LABEL_13:
      sub_B5D69C(mEventAlphaAnimRoot, v5);
    AlphaTransitionCalculator__MakeFadeOutFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  char v26; // w21
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v27; // x22
  __int64 mEventInfoGroupIdx; // x23
  int v29; // w23
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v36; // x21
  __int64 v37; // x22
  UnityEngine_Component_o *v38; // x21
  const MethodInfo *v39; // x3
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  bool v41; // w1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_42ECBEA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__,
      groupId,
      eventId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__, v19, v20, v21);
    this = (TitleInfoEventItemControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    byte_42ECBEA = 1;
  }
  memset(&v43, 0, sizeof(v43));
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    goto LABEL_62;
  if ( mEventInfoGroups->fields._size < 1 )
    return;
  if ( (groupId & 0x80000000) != 0 )
    TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  else
    v6->fields.mEventInfoGroupIdx = groupId;
  this = (TitleInfoEventItemControl_o *)TitleInfoEventItemControl__IsReprintLastWarRaid(
                                          this,
                                          eventId,
                                          *(const MethodInfo **)&eventId);
  v26 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v6->fields.mEventInfoGroups;
    if ( !v27 )
      goto LABEL_62;
    mEventInfoGroupIdx = v6->fields.mEventInfoGroupIdx;
    if ( v27->fields._size <= (unsigned int)mEventInfoGroupIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (TitleInfoEventItemControl_o *)v27->fields._items->m_Items[mEventInfoGroupIdx];
    if ( !this )
      goto LABEL_62;
    if ( ((*(__int64 (__fastcall **)(TitleInfoEventItemControl_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data) & 1) != 0 )
      TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  }
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v29 = 0;
  v43 = v42;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v34 )
      break;
    current = v43.fields.current;
    if ( (v26 & 1) == 0 )
    {
      if ( !v43.fields.current )
        sub_B5D69C(v34, v35);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43.fields.current, 0LL);
      if ( !gameObject )
        sub_B5D69C(0LL, v33);
      goto LABEL_24;
    }
    if ( !v43.fields.current )
      sub_B5D69C(v34, v35);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v43.fields.current->klass->vtable[6].method)(
            v43.fields.current,
            v43.fields.current->klass->vtable[7].methodPtr) & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B5D69C(0LL, v32);
LABEL_24:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v29 |= ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[4].method)(
             current,
             current->klass->vtable[5].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  v36 = v6->fields.mEventInfoGroups;
  if ( !v36 )
    goto LABEL_62;
  v37 = v6->fields.mEventInfoGroupIdx;
  if ( v36->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v38 = (UnityEngine_Component_o *)v36->fields._items->m_Items[v37];
  if ( !v38 )
    goto LABEL_62;
  if ( (v29 & ~((unsigned int (__fastcall *)(UnityEngine_Component_o *, const char *))v38->klass[1]._1.gc_desc)(
                 v38,
                 v38->klass[1]._1.name) & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v39);
    return;
  }
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( LOBYTE(v38[1].klass) )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0LL, 0LL) )
    {
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( this )
      {
        this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          goto LABEL_41;
        }
      }
LABEL_62:
      sub_B5D69C(this, *(_QWORD *)&groupId);
    }
LABEL_41:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_62;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    v41 = 0;
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
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( !this )
        goto LABEL_62;
      this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
      if ( !this )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_62;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    v41 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41, 0LL);
  if ( (((__int64 (__fastcall *)(UnityEngine_Component_o *, const char *))v38->klass[1]._1.gc_desc)(
          v38,
          v38->klass[1]._1.name) & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__SetEventGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t groupIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TitleInfoEventItemControl_o *v5; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int size; // w9
  int v8; // w8
  int v9; // w9

  v5 = this;
  if ( (byte_42ECBEC & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            groupIdx,
                                            (_DWORD)method,
                                            v3);
    byte_42ECBEC = 1;
  }
  mEventInfoGroups = v5->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B5D69C(this, *(_QWORD *)&groupIdx);
  size = mEventInfoGroups->fields._size;
  v8 = groupIdx - 1;
  if ( groupIdx - 1 >= size )
  {
    v8 = 0;
  }
  else
  {
    v9 = size - 1;
    if ( v8 < 0 )
      v8 = v9;
  }
  if ( v5->fields.mEventInfoGroupIdx != groupIdx )
  {
    v5->fields.mEventInfoGroupIdx = v8;
    TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(v5, *(const MethodInfo **)&groupIdx);
  }
}


void __fastcall TitleInfoEventItemControl__SetNextEventInfoGroupIndex(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventItemControl_o *v4; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int v6; // w8
  int size; // w9
  int32_t v8; // w8

  v4 = this;
  if ( (byte_42ECBEB & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42ECBEB = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  v6 = v4->fields.mEventInfoGroupIdx + 1;
  v4->fields.mEventInfoGroupIdx = v6;
  if ( !mEventInfoGroups )
    sub_B5D69C(this, method);
  size = mEventInfoGroups->fields._size;
  if ( v6 >= size )
  {
    v8 = 0;
  }
  else
  {
    if ( (v6 & 0x80000000) == 0 )
      return;
    v8 = size - 1;
  }
  v4->fields.mEventInfoGroupIdx = v8;
}


void __fastcall TitleInfoEventItemControl__SetupEventItem(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventRaidMaster_o *v16; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int v18; // w25
  const MethodInfo *v19; // x5

  if ( (byte_42ECBE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, (_DWORD)itemIds, dispTypes);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42ECBE6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  Instance = (DataManager_o *)EventRaidMaster__GetRaidGorupMax(v16, eventId, 0LL);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v18 = (int)Instance;
  Instance = (DataManager_o *)TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0LL);
  if ( v18 > 0 )
  {
LABEL_7:
    TitleInfoEventItemControl__SetupEventItemOnFixed(this, eventId, itemIds, dispTypes, titleImageId, v19);
    return;
  }
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( EventRaidEntityArrayFromEventId )
    {
      if ( EventRaidEntityArrayFromEventId->max_length == 1 )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(Instance, v15);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, dispTypes, titleImageId, v19);
}


void __fastcall TitleInfoEventItemControl__SetupEventItemOnFixed(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
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
  BattleServantConfConponent_o *p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  __int64 v25; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x25
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v37; // x24
  const MethodInfo *v38; // x5
  System_Int32_array **v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42ECBE7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, (_DWORD)itemIds, dispTypes);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42ECBE7 = 1;
  }
  p_mEventItemInfo = (BattleServantConfConponent_o *)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_mEventItemInfo->klass;
    if ( !p_mEventItemInfo->klass )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    p_mEventItemInfo->klass = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.mEventItemInfo, 0LL, v28, v29, v30, v31, v32, v33);
  }
  klass = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_19;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)klass,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v35 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v37 = v35;
  GameObjectExtensions__SafeSetParent_32436524(v35, mEventRoot, 0LL);
  if ( !v37
    || (klass = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v37,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(klass, v25);
  }
  v39 = (System_Int32_array **)klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    dispTypes,
    eventId,
    titleImageId,
    v38);
  p_mEventItemInfo->klass = (BattleServantConfConponent_c *)v39;
  sub_B5D560(p_mEventItemInfo, v39, v40, v41, v42, v43, v44, v45);
}


void __fastcall TitleInfoEventItemControl__SetupEventItemOnLoop(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x24
  UnityEngine_GameObject_o *v29; // x24
  const MethodInfo *v30; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x24

  if ( (byte_42ECBE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, (_DWORD)itemIds, dispTypes);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42ECBE8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v29, (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot, 0LL);
  if ( !v29
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v29,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL
    || (v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          dispTypes,
          eventId,
          titleImageId,
          v30),
        (Instance = (DataManager_o *)this->fields.mEventInfoGroups) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(Instance, v27);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
}


void __fastcall TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
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
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v19; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  __int64 v21; // x1
  AlphaTransitionCalculator_o *Instance; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v25; // s8
  TitleInfoControl_c *v26; // x0
  const MethodInfo *v27; // x3
  System_Action_o *onChangedEventGroup; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct AlphaTransitionCalculator_o *v35; // x8

  if ( (byte_42ECBEE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&TitleInfoControl_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v12, v13, v14);
    sub_B5D5C4(&Method_TransitionCalculator_float__get_Current__, v15, v16, v17);
    byte_42ECBEE = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v19) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_36;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_36;
          if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
          {
            Instance = this->fields.ownEventItemUiAlphaCalculator;
            if ( !Instance )
              goto LABEL_36;
            if ( AlphaTransitionCalculator__IsFadeInFinished(Instance, 0LL) )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              mEventAlphaAnimTimeOld = this->fields.mEventAlphaAnimTimeOld;
              v25 = realtimeSinceStartup;
              v26 = TitleInfoControl_TypeInfo;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                v26 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v25 - mEventAlphaAnimTimeOld) >= v26->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
              {
                Instance = this->fields.ownEventItemUiAlphaCalculator;
                if ( !Instance )
                  goto LABEL_36;
                AlphaTransitionCalculator__StartFadeOut(Instance, 0LL);
              }
            }
          }
        }
      }
      Instance = this->fields.ownEventItemUiAlphaCalculator;
      if ( Instance )
      {
        Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = this->fields.ownEventItemUiAlphaCalculator;
          if ( !Instance )
            goto LABEL_36;
          AlphaTransitionCalculator__StartFadeIn(Instance, 0LL);
          this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v27);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
            0LL,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          ActionExtensions__Call(onChangedEventGroup, 0LL);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v35 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v35 )
        {
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
              Instance,
              Instance->klass[1]._1.declaringType,
              v35->fields._Current_k__BackingField);
            if ( !this->fields.alphaAnimForceDisp )
              return;
            Instance = this->fields.ownEventItemUiAlphaCalculator;
            if ( Instance )
            {
              if ( AlphaTransitionCalculator__IsFadeInFinished(Instance, 0LL) && this->fields.alphaAnimForceNextCheck )
                *(_WORD *)&this->fields.alphaAnimForceDisp = 0;
              return;
            }
          }
        }
      }
LABEL_36:
      sub_B5D69C(Instance, v21);
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}