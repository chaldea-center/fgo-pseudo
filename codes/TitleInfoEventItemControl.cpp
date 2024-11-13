void __fastcall TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B14E4C & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventItemControl_TypeInfo, v1, v2);
    byte_4B14E4C = 1;
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
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x26
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B14E3E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__,
      titleInfoControl,
      eventRoot);
    sub_1BCA7E0(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo, v15, v16);
    byte_4B14E3E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo,
                                                       titleInfoControl,
                                                       eventRoot,
                                                       eventAlphaAnimRoot);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEventInfoGroups, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.titleInfoControl = titleInfoControl;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)titleInfoControl, v24, v25, v26, v27, v28, v29);
  this->fields.mEventRoot = eventRoot;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEventRoot, (int64_t)eventRoot, v30, v31, v32, v33, v34, v35);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEventAlphaAnimRoot,
    (int64_t)eventAlphaAnimRoot,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.alphaAnimChangeBtn,
    (int64_t)alphaAnimChangeBtn,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mTitleInfoEventItemPrefab,
    (int64_t)titleInfoEventItemPrefab,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (int64_t)defeatCntAlphaAnimChangeBtn,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventItemControl__DelayedDestroy(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14E40 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo, method, v2);
    byte_4B14E40 = 1;
  }
  v5 = sub_1BCAA2C(TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_c *v28; // x8
  UnityEngine_Component_o *v29; // x20
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int32_t size; // w2
  int v35; // w9

  if ( (byte_4B14E3F & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v10, v11);
    byte_4B14E3F = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0LL);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v23);
LABEL_38:
      sub_1BCAA3C(v23, v24);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( mEventAlphaAnimRoot )
  {
    v28 = mEventAlphaAnimRoot->klass;
    v29 = mEventAlphaAnimRoot;
    v30 = *(unsigned __int16 *)(&mEventAlphaAnimRoot->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mEventAlphaAnimRoot->klass->_2.bitflags2 + 3) )
    {
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_30;
      }
      v32 = (__int64)(&v28->vtable._0_Equals.method + 2 * *v31);
    }
    else
    {
LABEL_30:
      v32 = sub_1C1C7C0(mEventAlphaAnimRoot, System_IDisposable_TypeInfo, 0LL);
    }
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD))v32)(
                                                       v29,
                                                       *(_QWORD *)(v32 + 8));
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_39:
    sub_1BCAA3C(mEventAlphaAnimRoot, method);
  size = mEventInfoGroups->fields._size;
  v35 = mEventInfoGroups->fields._version + 1;
  mEventInfoGroups->fields._size = 0;
  mEventInfoGroups->fields._version = v35;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventInfoGroups->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  __int64 v15; // x1
  TitleInfoEventItemControl_c *v16; // x0
  __int64 v17; // x1
  float v18; // s8
  TitleInfoControl_c *v19; // x0
  System_Func_float__float__float__float__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AlphaTransitionCalculator_o *v24; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B14E48 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoEventItemControl_TypeInfo, v9, v10);
    byte_4B14E48 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL) )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(this, 0, eventId, v12);
    mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method)(
      mEventAlphaAnimRoot,
      mEventAlphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v16 = TitleInfoEventItemControl_TypeInfo;
    if ( !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo, v15);
      v16 = TitleInfoEventItemControl_TypeInfo;
    }
    v18 = ChangedFPSUtil__CovertFrameNumToSecond(v16->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
    v19 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v17);
      v19 = TitleInfoControl_TypeInfo;
    }
    v20 = ExtraEasing__AsymptoticSeriesFloat(
            v19->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0LL);
    v24 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v21, v22, v23);
    AlphaTransitionCalculator___ctor(v24, v18, v20, 0LL);
    this->fields.ownEventItemUiAlphaCalculator = v24;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_ownEventItemUiAlphaCalculator,
      (int64_t)v24,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_13:
      sub_1BCAA3C(mEventAlphaAnimRoot, v13);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
  }
}


bool __fastcall TitleInfoEventItemControl__IsEventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventItemControl_o *v3; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v3 = this;
  if ( (byte_4B14E44 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            method,
                                            v2);
    byte_4B14E44 = 1;
  }
  mEventInfoGroups = v3->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1BCAA3C(this, method);
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
  bool v7; // w10
  int i; // w11

  if ( (byte_4B14E4B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B14E4B = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    v4 = BalanceConfig_TypeInfo;
  }
  ReprintLastWarRaidEventIdList = v4->static_fields->ReprintLastWarRaidEventIdList;
  if ( ReprintLastWarRaidEventIdList )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&eventId);
      v4 = BalanceConfig_TypeInfo;
      ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
      if ( !ReprintLastWarRaidEventIdList )
        goto LABEL_20;
    }
    if ( !*(_QWORD *)&ReprintLastWarRaidEventIdList->max_length )
    {
      LOBYTE(ReprintLastWarRaidEventIdList) = 0;
      return (unsigned __int8)ReprintLastWarRaidEventIdList & 1;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&eventId);
      ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
      if ( !ReprintLastWarRaidEventIdList )
LABEL_20:
        sub_1BCAA3C(v4, *(_QWORD *)&eventId);
    }
    max_length = ReprintLastWarRaidEventIdList->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1BCAA44(v4, *(_QWORD *)&eventId);
        if ( ReprintLastWarRaidEventIdList->m_Items[i + 1] == eventId )
          break;
        ++i;
      }
    }
    LOBYTE(ReprintLastWarRaidEventIdList) = !v7;
  }
  return (unsigned __int8)ReprintLastWarRaidEventIdList & 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4B14E4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__, method, v2);
    byte_4B14E4A = 1;
  }
  if ( TitleInfoEventItemControl__IsEventInfoGroups(this, method) )
  {
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_12;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEventAlphaAnimRoot, 0LL);
    if ( !mEventAlphaAnimRoot )
      goto LABEL_12;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mEventAlphaAnimRoot, 0LL) )
      return;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( !mEventAlphaAnimRoot )
LABEL_12:
      sub_1BCAA3C(mEventAlphaAnimRoot, v4);
    AlphaTransitionCalculator__MakeFadeOutFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
    v6 = Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__;
    if ( (*((_BYTE *)Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  bool IsReprintLastWarRaid; // w21
  int v21; // w24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  TitleInfoEventItemControl_o *v28; // x21
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  int mEventAlphaAnimRoot_low; // w22
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  bool v33; // w0
  bool v34; // w1
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B14E45 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__,
      *(_QWORD *)&groupId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__, v15, v16);
    this = (TitleInfoEventItemControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B14E45 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    goto LABEL_54;
  if ( mEventInfoGroups->fields._size < 1 )
    return;
  if ( (groupId & 0x80000000) != 0 )
    TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  else
    v6->fields.mEventInfoGroupIdx = groupId;
  IsReprintLastWarRaid = TitleInfoEventItemControl__IsReprintLastWarRaid(this, eventId, *(const MethodInfo **)&eventId);
  if ( IsReprintLastWarRaid )
  {
    this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6->fields.mEventInfoGroupIdx,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    if ( !this )
      goto LABEL_54;
    if ( ((*(__int64 (__fastcall **)(TitleInfoEventItemControl_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data) & 1) != 0 )
      TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  }
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v21 = 0;
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v22 )
      break;
    current = v36.fields._current;
    if ( !IsReprintLastWarRaid )
    {
      if ( !v36.fields._current )
        sub_1BCAA3C(v22, v23);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36.fields._current, 0LL);
      if ( !gameObject )
        sub_1BCAA3C(0LL, v27);
      goto LABEL_23;
    }
    if ( !v36.fields._current )
      sub_1BCAA3C(v22, v23);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v36.fields._current->klass->vtable[6].method)(
            v36.fields._current,
            v36.fields._current->klass->vtable[7].methodPtr) & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1BCAA3C(0LL, v26);
LABEL_23:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v21 |= ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[4].method)(
             current,
             current->klass->vtable[5].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_54;
  this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v6->fields.mEventInfoGroupIdx,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
  if ( !this )
    goto LABEL_54;
  v28 = this;
  if ( (v21 & ~((unsigned int (__fastcall *)(TitleInfoEventItemControl_o *, const char *))this->klass[1]._1.gc_desc)(
                 this,
                 this->klass[1]._1.name) & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v30);
    return;
  }
  mEventAlphaAnimRoot_low = LOBYTE(v28->fields.mEventAlphaAnimRoot);
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v33 = UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0LL, 0LL);
  if ( mEventAlphaAnimRoot_low )
  {
    if ( v33 )
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
          goto LABEL_36;
        }
      }
LABEL_54:
      sub_1BCAA3C(this, *(_QWORD *)&groupId);
    }
LABEL_36:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_54;
    v34 = 0;
  }
  else
  {
    if ( v33 )
    {
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( !this )
        goto LABEL_54;
      this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
      if ( !this )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_54;
    v34 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34, 0LL);
  if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, const char *))v28->klass[1]._1.gc_desc)(
          v28,
          v28->klass[1]._1.name) & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !this )
      goto LABEL_54;
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
  int size; // w8
  int v7; // w10
  int v8; // w8

  v4 = this;
  if ( (byte_4B14E47 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            *(_QWORD *)&groupIdx,
                                            method);
    byte_4B14E47 = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1BCAA3C(this, *(_QWORD *)&groupIdx);
  if ( v4->fields.mEventInfoGroupIdx != groupIdx )
  {
    size = mEventInfoGroups->fields._size;
    v7 = size - 1;
    if ( groupIdx - 1 >= 0 )
      v7 = groupIdx - 1;
    if ( groupIdx - 1 >= size )
      v8 = 0;
    else
      v8 = v7;
    v4->fields.mEventInfoGroupIdx = v8;
    TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(v4, *(const MethodInfo **)&groupIdx);
  }
}


void __fastcall TitleInfoEventItemControl__SetNextEventInfoGroupIndex(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventItemControl_o *v3; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int v5; // w8
  int size; // w9
  int32_t v7; // w8

  v3 = this;
  if ( (byte_4B14E46 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            method,
                                            v2);
    byte_4B14E46 = 1;
  }
  mEventInfoGroups = v3->fields.mEventInfoGroups;
  v5 = v3->fields.mEventInfoGroupIdx + 1;
  v3->fields.mEventInfoGroupIdx = v5;
  if ( !mEventInfoGroups )
    sub_1BCAA3C(this, method);
  size = mEventInfoGroups->fields._size;
  if ( v5 >= size )
  {
    v7 = 0;
  }
  else
  {
    if ( (v5 & 0x80000000) == 0 )
      return;
    v7 = size - 1;
  }
  v3->fields.mEventInfoGroupIdx = v7;
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
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  EventRaidMaster_o *v15; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int v17; // w25
  const MethodInfo *v18; // x5

  if ( (byte_4B14E41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, itemIds);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B14E41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_12;
  v15 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  Instance = (Il2CppObject *)EventRaidMaster__GetRaidGorupMax(v15, eventId, 0LL);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v17 = (int)Instance;
  Instance = (Il2CppObject *)TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0LL);
  if ( v17 > 0 )
  {
LABEL_7:
    TitleInfoEventItemControl__SetupEventItemOnFixed(this, eventId, itemIds, dispTypes, titleImageId, v18);
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
    sub_1BCAA3C(Instance, v14);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, dispTypes, titleImageId, v18);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  PartyOrganizationUtility_o *p_mEventItemInfo; // x24
  UnityEngine_Object_o *mEventItemInfo; // x25
  __int64 v21; // x1
  Il2CppObject *klass; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v33; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v35; // x23
  int64_t v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B14E42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, itemIds);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B14E42 = 1;
  }
  p_mEventItemInfo = (PartyOrganizationUtility_o *)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)p_mEventItemInfo->klass;
    if ( !p_mEventItemInfo->klass )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    p_mEventItemInfo->klass = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEventItemInfo, 0LL, v25, v26, v27, v28, v29, v30);
  }
  klass = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_16;
  DataManager__GetMasterData_object_(
    (DataManager_o *)klass,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  v33 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v35 = (UnityEngine_GameObject_o *)v33;
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v33, mEventRoot, 0LL);
  if ( !v35
    || (klass = UnityEngine_GameObject__GetComponent_object_(
                  v35,
                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(klass, v21);
  }
  v36 = (int64_t)klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    dispTypes,
    eventId,
    titleImageId,
    0LL);
  p_mEventItemInfo->klass = (PartyOrganizationUtility_c *)v36;
  sub_1BCA784(p_mEventItemInfo, v36, v37, v38, v39, v40, v41, v42);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *mTitleInfoEventItemPrefab; // x24
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8

  if ( (byte_4B14E43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, itemIds);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B14E43 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v25,
    (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot,
    0LL);
  if ( !v25
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)v25,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL
    || (v26 = (Il2CppObject *)Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          dispTypes,
          eventId,
          titleImageId,
          0LL),
        (Instance = (DataManager_o *)this->fields.mEventInfoGroups) == 0LL)
    || (v33 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v34 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v33) )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v22);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = v33 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v36 + 32) = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
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
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v14; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  __int64 v16; // x1
  AlphaTransitionCalculator_o *Instance; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v20; // s8
  TitleInfoControl_c *v21; // x0
  const MethodInfo *v22; // x3
  System_Action_o *onChangedEventGroup; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct AlphaTransitionCalculator_o *v30; // x8

  if ( (byte_4B14E49 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v9, v10);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v11, v12);
    byte_4B14E49 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v14) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_34;
          if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
          {
            Instance = this->fields.ownEventItemUiAlphaCalculator;
            if ( !Instance )
              goto LABEL_34;
            if ( AlphaTransitionCalculator__IsFadeInFinished(Instance, 0LL) )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              mEventAlphaAnimTimeOld = this->fields.mEventAlphaAnimTimeOld;
              v20 = realtimeSinceStartup;
              v21 = TitleInfoControl_TypeInfo;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v16);
                v21 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v20 - mEventAlphaAnimTimeOld) >= v21->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
              {
                Instance = this->fields.ownEventItemUiAlphaCalculator;
                if ( !Instance )
                  goto LABEL_34;
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
            goto LABEL_34;
          AlphaTransitionCalculator__StartFadeIn(Instance, 0LL);
          this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v22);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.onChangedEventGroup,
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
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
              Instance,
              Instance->klass[1]._1.declaringType,
              v30->fields._Current_k__BackingField);
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
LABEL_34:
      sub_1BCAA3C(Instance, v16);
    }
  }
}


bool __fastcall TitleInfoEventItemControl___DelayedDestroy_b__41_0(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventItemControl_o *v3; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v3 = this;
  if ( (byte_4B14E4D & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__,
                                            method,
                                            v2);
    byte_4B14E4D = 1;
  }
  mEventInfoGroups = v3->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1BCAA3C(this, method);
  return mEventInfoGroups->fields._size > 0;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mEventInfoGroups = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEventInfoGroups,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onChangedEventGroup = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onChangedEventGroup,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventItemControl__DelayedDestroy_d__41___ctor(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventItemControl__DelayedDestroy_d__41__MoveNext(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t _1__state; // w8
  struct TitleInfoEventItemControl_o *_4__this; // x19
  System_Collections_Generic_List_object__o *v35; // x22
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o **p_oldEventInfoGroups_5__2; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_List_object__o *oldEventInfoGroups_5__2; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_object__o *v51; // x0
  Il2CppObject *v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x8
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v61; // x1
  __int64 v62; // x0
  __int64 v63; // x1
  System_Collections_Generic_List_object__o *mEventInfoGroups; // x0
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x20
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v67; // x8
  int32_t v68; // w2
  int v69; // w9
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Func_bool__o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  UnityEngine_WaitUntil_o *v77; // x19
  Il2CppObject **p__2__current; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B14E4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__, v9, v10);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__, v29, v30);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v31, v32);
    byte_4B14E4E = 1;
  }
  memset(&v87, 0, sizeof(v87));
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)this->fields._oldEventInfoGroups_5__2;
    this->fields.__1__state = -1;
    if ( !oldEventInfoGroups_5__2 )
      goto LABEL_43;
    if ( oldEventInfoGroups_5__2->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v86,
        oldEventInfoGroups_5__2,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
      v87 = v86;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v87,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
        if ( !v57 )
          break;
        current = v87.fields._current;
        if ( !v87.fields._current )
          sub_1BCAA3C(v57, v58);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v87.fields._current, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v61);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        if ( !_4__this )
          sub_1BCAA3C(v62, v63);
        mEventInfoGroups = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
        if ( !mEventInfoGroups )
          sub_1BCAA3C(0LL, v63);
        System_Collections_Generic_List_object___Remove(
          mEventInfoGroups,
          current,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
        v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
        UnityEngine_Object__Destroy_70154244(v66, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v87,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
      if ( !_4__this )
        goto LABEL_43;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__First_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.mEventInfoGroups,
                                                                               (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_43;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)oldEventInfoGroups_5__2,
                                                                               0LL);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)oldEventInfoGroups_5__2, 1, 0LL);
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    this->fields._oldEventInfoGroups_5__2 = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v35;
    p_oldEventInfoGroups_5__2 = &this->fields._oldEventInfoGroups_5__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._oldEventInfoGroups_5__2,
      (int64_t)v35,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    if ( _4__this )
    {
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
      if ( oldEventInfoGroups_5__2 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v86,
          oldEventInfoGroups_5__2,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
        v87 = v86;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v87,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
        {
          v51 = (System_Collections_Generic_List_object__o *)*p_oldEventInfoGroups_5__2;
          if ( !*p_oldEventInfoGroups_5__2 )
            sub_1BCAA3C(0LL, v44);
          v52 = v87.fields._current;
          items = v51->fields._items;
          v54 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__;
          ++v51->fields._version;
          if ( !items )
            sub_1BCAA3C(v51, v52);
          size = v51->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              v52,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v51->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v52;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v52, v45, v46, v47, v48, v49, v50);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v87,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
        v67 = _4__this->fields.mEventInfoGroups;
        if ( v67 )
        {
          v68 = v67->fields._size;
          v69 = v67->fields._version + 1;
          v67->fields._size = 0;
          v67->fields._version = v69;
          if ( v68 >= 1 )
            System_Array__Clear((System_Array_o *)v67->fields._items, 0, v68, 0LL);
          oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventAlphaAnimRoot;
          if ( oldEventInfoGroups_5__2 )
          {
            ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float))oldEventInfoGroups_5__2->klass->vtable._8_unknown.method)(
              oldEventInfoGroups_5__2,
              oldEventInfoGroups_5__2->klass->vtable._9_unknown.methodPtr,
              1.0);
            oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.ownEventItemUiAlphaCalculator;
            if ( oldEventInfoGroups_5__2 )
            {
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)oldEventInfoGroups_5__2, 0LL);
              _4__this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v73 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v70, v71, v72);
              System_Func_bool____ctor(
                v73,
                (Il2CppObject *)_4__this,
                Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__,
                0LL);
              v77 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v74, v75, v76);
              UnityEngine_WaitUntil___ctor(v77, v73, 0LL);
              this->fields.__2__current = (Il2CppObject *)v77;
              p__2__current = &this->fields.__2__current;
              sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v77, v79, v80, v81, v82, v83, v84);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(oldEventInfoGroups_5__2, method);
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_IEnumerator_Reset(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TitleInfoEventItemControl__DelayedDestroy_d__41_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_IEnumerator_get_Current(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventItemControl__DelayedDestroy_d__41__System_IDisposable_Dispose(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  ;
}