void __fastcall TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418BA04 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventItemControl_TypeInfo, v1);
    byte_418BA04 = 1;
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

  if ( (byte_418B9F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__, titleInfoControl);
    sub_B2C35C(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo, v15);
    byte_418B9F7 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v16;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)titleInfoControl,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.mEventRoot = eventRoot;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mEventRoot,
    (System_Int32_array **)eventRoot,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mEventAlphaAnimRoot,
    (System_Int32_array **)eventAlphaAnimRoot,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.alphaAnimChangeBtn,
    (System_Int32_array **)alphaAnimChangeBtn,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mTitleInfoEventItemPrefab,
    (System_Int32_array **)titleInfoEventItemPrefab,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_B2C2F8(
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
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x20
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_418B9F8 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v6);
    byte_418B9F8 = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_38;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0LL);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v15);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_37;
    v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v20);
LABEL_37:
      sub_B2C434(v20, v21);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v26 = *(_QWORD *)v24;
    v27 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_31;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_31:
      v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventInfoGroups;
  if ( !mEventAlphaAnimRoot )
LABEL_38:
    sub_B2C434(mEventAlphaAnimRoot, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mEventAlphaAnimRoot,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
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
  __int64 v10; // x1
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  TitleInfoEventItemControl_c *v12; // x0
  float v13; // s8
  TitleInfoControl_c *v14; // x0
  System_Func_float__float__float__float__o *v15; // x20
  AlphaTransitionCalculator_o *v16; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_418BA00 & 1) == 0 )
  {
    sub_B2C35C(&AlphaTransitionCalculator_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&TitleInfoControl_TypeInfo, v6);
    sub_B2C35C(&TitleInfoEventItemControl_TypeInfo, v7);
    byte_418BA00 = 1;
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
    v12 = TitleInfoEventItemControl_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo);
      v12 = TitleInfoEventItemControl_TypeInfo;
    }
    v13 = ChangedFPSUtil__CovertFrameNumToSecond(v12->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
    v14 = TitleInfoControl_TypeInfo;
    if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v14 = TitleInfoControl_TypeInfo;
    }
    v15 = ExtraEasing__AsymptoticSeriesFloat(
            v14->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0LL);
    v16 = (AlphaTransitionCalculator_o *)sub_B2C42C(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v16, v13, v15, 0LL);
    this->fields.ownEventItemUiAlphaCalculator = v16;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_ownEventItemUiAlphaCalculator,
      (System_Int32_array **)v16,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_16:
      sub_B2C434(mEventAlphaAnimRoot, v10);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
  }
}


bool __fastcall TitleInfoEventItemControl__IsEventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_418B9FC & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            method);
    byte_418B9FC = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B2C434(this, method);
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
  __int64 v6; // x1
  int max_length; // w9
  unsigned int v8; // w10
  __int64 v10; // x0

  if ( (byte_418BA03 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    byte_418BA03 = 1;
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
      sub_B2C434(v4, v6);
  }
  max_length = ReprintLastWarRaidEventIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B2C460(v4);
      sub_B2C400(v10, 0LL);
    }
    if ( ReprintLastWarRaidEventIdList->m_Items[v8 + 1] == eventId )
      break;
    if ( (int)++v8 >= max_length )
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
  __int64 v3; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0

  if ( (byte_418BA02 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418BA02 = 1;
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
      sub_B2C434(mEventAlphaAnimRoot, v3);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  char v14; // w21
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v15; // x22
  __int64 mEventInfoGroupIdx; // x23
  int v17; // w23
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v24; // x21
  __int64 v25; // x22
  UnityEngine_Component_o *v26; // x21
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  bool v29; // w1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_418B9FD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__,
      *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__, v11);
    this = (TitleInfoEventItemControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_418B9FD = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
  v14 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v6->fields.mEventInfoGroups;
    if ( !v15 )
      goto LABEL_62;
    mEventInfoGroupIdx = v6->fields.mEventInfoGroupIdx;
    if ( v15->fields._size <= (unsigned int)mEventInfoGroupIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (TitleInfoEventItemControl_o *)v15->fields._items->m_Items[mEventInfoGroupIdx];
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
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v17 = 0;
  v31 = v30;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v22 )
      break;
    current = v31.fields.current;
    if ( (v14 & 1) == 0 )
    {
      if ( !v31.fields.current )
        sub_B2C434(v22, v23);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31.fields.current, 0LL);
      if ( !gameObject )
        sub_B2C434(0LL, v21);
      goto LABEL_24;
    }
    if ( !v31.fields.current )
      sub_B2C434(v22, v23);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v31.fields.current->klass->vtable[6].method)(
            v31.fields.current,
            v31.fields.current->klass->vtable[7].methodPtr) & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B2C434(0LL, v20);
LABEL_24:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v17 |= ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[4].method)(
             current,
             current->klass->vtable[5].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  v24 = v6->fields.mEventInfoGroups;
  if ( !v24 )
    goto LABEL_62;
  v25 = v6->fields.mEventInfoGroupIdx;
  if ( v24->fields._size <= (unsigned int)v25 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v26 = (UnityEngine_Component_o *)v24->fields._items->m_Items[v25];
  if ( !v26 )
    goto LABEL_62;
  if ( (v17 & ~((unsigned int (__fastcall *)(UnityEngine_Component_o *, const char *))v26->klass[1]._1.gc_desc)(
                 v26,
                 v26->klass[1]._1.name) & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v27);
    return;
  }
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( LOBYTE(v26[1].klass) )
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
      sub_B2C434(this, *(_QWORD *)&groupId);
    }
LABEL_41:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_62;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    v29 = 0;
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
    v29 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29, 0LL);
  if ( (((__int64 (__fastcall *)(UnityEngine_Component_o *, const char *))v26->klass[1]._1.gc_desc)(
          v26,
          v26->klass[1]._1.name) & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject(v26, 0LL);
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
  TitleInfoEventItemControl_o *v4; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int size; // w9
  int v7; // w8
  int v8; // w9

  v4 = this;
  if ( (byte_418B9FF & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            *(_QWORD *)&groupIdx);
    byte_418B9FF = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_B2C434(this, *(_QWORD *)&groupIdx);
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
  if ( v4->fields.mEventInfoGroupIdx != groupIdx )
  {
    v4->fields.mEventInfoGroupIdx = v7;
    TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(v4, *(const MethodInfo **)&groupIdx);
  }
}


void __fastcall TitleInfoEventItemControl__SetNextEventInfoGroupIndex(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int v4; // w8
  int size; // w9
  int32_t v6; // w8

  v2 = this;
  if ( (byte_418B9FE & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            method);
    byte_418B9FE = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  v4 = v2->fields.mEventInfoGroupIdx + 1;
  v2->fields.mEventInfoGroupIdx = v4;
  if ( !mEventInfoGroups )
    sub_B2C434(this, method);
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
  v2->fields.mEventInfoGroupIdx = v6;
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventRaidMaster_o *v14; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int v16; // w25
  const MethodInfo *v17; // x5

  if ( (byte_418B9F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418B9F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_12;
  v14 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  Instance = (DataManager_o *)EventRaidMaster__GetRaidGorupMax(v14, eventId, 0LL);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v16 = (int)Instance;
  Instance = (DataManager_o *)TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0LL);
  if ( v16 > 0 )
  {
LABEL_7:
    TitleInfoEventItemControl__SetupEventItemOnFixed(this, eventId, itemIds, dispTypes, titleImageId, v17);
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
    sub_B2C434(Instance, v13);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, dispTypes, titleImageId, v17);
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
  BattleServantConfConponent_o *p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  __int64 v17; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x25
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v29; // x24
  const MethodInfo *v30; // x5
  System_Int32_array **v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418B9FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418B9FA = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    p_mEventItemInfo->klass = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mEventItemInfo, 0LL, v20, v21, v22, v23, v24, v25);
  }
  klass = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_19;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)klass,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v29 = v27;
  GameObjectExtensions__SafeSetParent_31331952(v27, mEventRoot, 0LL);
  if ( !v29
    || (klass = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v29,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL )
  {
LABEL_19:
    sub_B2C434(klass, v17);
  }
  v31 = (System_Int32_array **)klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    dispTypes,
    eventId,
    titleImageId,
    v30);
  p_mEventItemInfo->klass = (BattleServantConfConponent_c *)v31;
  sub_B2C2F8(p_mEventItemInfo, v31, v32, v33, v34, v35, v36, v37);
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct UnityEngine_GameObject_o *mTitleInfoEventItemPrefab; // x24
  UnityEngine_GameObject_o *v19; // x24
  const MethodInfo *v20; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24

  if ( (byte_418B9FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418B9FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = this->fields.mTitleInfoEventItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mTitleInfoEventItemPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v19, (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v19,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL
    || (v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          dispTypes,
          eventId,
          titleImageId,
          v20),
        (Instance = (DataManager_o *)this->fields.mEventInfoGroups) == 0LL) )
  {
LABEL_11:
    sub_B2C434(Instance, v17);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
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
  __int64 v12; // x1
  AlphaTransitionCalculator_o *Instance; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v16; // s8
  TitleInfoControl_c *v17; // x0
  const MethodInfo *v18; // x3
  System_Action_o *onChangedEventGroup; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct AlphaTransitionCalculator_o *v26; // x8

  if ( (byte_418BA01 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&TitleInfoControl_TypeInfo, v6);
    sub_B2C35C(&Method_TransitionCalculator_float__Update__, v7);
    sub_B2C35C(&Method_TransitionCalculator_float__get_Current__, v8);
    byte_418BA01 = 1;
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
        (const MethodInfo_26488C4 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_36;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v16 = realtimeSinceStartup;
              v17 = TitleInfoControl_TypeInfo;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                v17 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v16 - mEventAlphaAnimTimeOld) >= v17->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
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
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v18);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0LL;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
            0LL,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          ActionExtensions__Call(onChangedEventGroup, 0LL);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v26 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v26 )
        {
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
              Instance,
              Instance->klass[1]._1.declaringType,
              v26->fields._Current_k__BackingField);
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
      sub_B2C434(Instance, v12);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onChangedEventGroup,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}