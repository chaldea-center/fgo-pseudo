void __fastcall TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  if ( (byte_4BDB179 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventItemControl_TypeInfo);
    byte_4BDB179 = 1;
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
  System_Collections_Generic_List_object__o *v15; // x26
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4BDB16B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    byte_4BDB16B = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mEventInfoGroups, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.titleInfoControl = titleInfoControl;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)titleInfoControl, v22, v23, v24, v25, v26, v27);
  this->fields.mEventRoot = eventRoot;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mEventRoot, (int64_t)eventRoot, v28, v29, v30, v31, v32, v33);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mEventAlphaAnimRoot,
    (int64_t)eventAlphaAnimRoot,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.alphaAnimChangeBtn,
    (int64_t)alphaAnimChangeBtn,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mTitleInfoEventItemPrefab,
    (int64_t)titleInfoEventItemPrefab,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (int64_t)defeatCntAlphaAnimChangeBtn,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventItemControl__DelayedDestroy(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB16D & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
    byte_4BDB16D = 1;
  }
  v3 = sub_1C22084(TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_c *v18; // x8
  UnityEngine_Component_o *v19; // x20
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int32_t size; // w2
  int v25; // w9

  if ( (byte_4BDB16C & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BDB16C = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0LL);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_17:
      v13 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v14);
LABEL_38:
      sub_1C22094(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( mEventAlphaAnimRoot )
  {
    v18 = mEventAlphaAnimRoot->klass;
    v19 = mEventAlphaAnimRoot;
    v20 = *(unsigned __int16 *)(&mEventAlphaAnimRoot->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mEventAlphaAnimRoot->klass->_2.bitflags2 + 3) )
    {
      v21 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_30;
      }
      v22 = (__int64)(&v18->vtable._0_Equals.method + 2 * *v21);
    }
    else
    {
LABEL_30:
      v22 = sub_1C73E18(mEventAlphaAnimRoot, System_IDisposable_TypeInfo, 0LL);
    }
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD))v22)(
                                                       v19,
                                                       *(_QWORD *)(v22 + 8));
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_39:
    sub_1C22094(mEventAlphaAnimRoot, method);
  size = mEventInfoGroups->fields._size;
  v25 = mEventInfoGroups->fields._version + 1;
  mEventInfoGroups->fields._size = 0;
  mEventInfoGroups->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventInfoGroups->fields._items, 0, size, 0LL);
}


void __fastcall TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  TitleInfoEventItemControl_c *v9; // x0
  float v10; // s8
  TitleInfoControl_c *v11; // x0
  System_Func_float__float__float__float__o *v12; // x20
  AlphaTransitionCalculator_o *v13; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDB175 & 1) == 0 )
  {
    sub_1C21E38(&AlphaTransitionCalculator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoControl_TypeInfo);
    sub_1C21E38(&TitleInfoEventItemControl_TypeInfo);
    byte_4BDB175 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL) )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(this, 0, eventId, v6);
    mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method)(
      mEventAlphaAnimRoot,
      mEventAlphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v9 = TitleInfoEventItemControl_TypeInfo;
    if ( !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo);
      v9 = TitleInfoEventItemControl_TypeInfo;
    }
    v10 = ChangedFPSUtil__CovertFrameNumToSecond(v9->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
    v11 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v11 = TitleInfoControl_TypeInfo;
    }
    v12 = ExtraEasing__AsymptoticSeriesFloat(
            v11->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0LL);
    v13 = (AlphaTransitionCalculator_o *)sub_1C22084(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v13, v10, v12, 0LL);
    this->fields.ownEventItemUiAlphaCalculator = v13;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)p_ownEventItemUiAlphaCalculator,
      (int64_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_13:
      sub_1C22094(mEventAlphaAnimRoot, v7);
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
  if ( (byte_4BDB171 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4BDB171 = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C22094(this, method);
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

  if ( (byte_4BDB178 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDB178 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  ReprintLastWarRaidEventIdList = v4->static_fields->ReprintLastWarRaidEventIdList;
  if ( ReprintLastWarRaidEventIdList )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
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
      j_il2cpp_runtime_class_init_0(v4);
      ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
      if ( !ReprintLastWarRaidEventIdList )
LABEL_20:
        sub_1C22094(v4, *(_QWORD *)&eventId);
    }
    max_length = ReprintLastWarRaidEventIdList->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1C2209C(v4, *(_QWORD *)&eventId);
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
  __int64 v3; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4BDB177 & 1) == 0 )
  {
    sub_1C21E38(&Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    byte_4BDB177 = 1;
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
      sub_1C22094(mEventAlphaAnimRoot, v3);
    AlphaTransitionCalculator__MakeFadeOutFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0LL);
    v5 = Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__;
    if ( (*((_BYTE *)Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  bool IsReprintLastWarRaid; // w21
  int v9; // w24
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  TitleInfoEventItemControl_o *v16; // x21
  const MethodInfo *v17; // x3
  int mEventAlphaAnimRoot_low; // w22
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  bool v20; // w0
  bool v21; // w1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BDB172 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    this = (TitleInfoEventItemControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB172 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v9 = 0;
  v23 = v22;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v10 )
      break;
    current = v23.fields._current;
    if ( !IsReprintLastWarRaid )
    {
      if ( !v23.fields._current )
        sub_1C22094(v10, v11);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23.fields._current, 0LL);
      if ( !gameObject )
        sub_1C22094(0LL, v15);
      goto LABEL_23;
    }
    if ( !v23.fields._current )
      sub_1C22094(v10, v11);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v23.fields._current->klass->vtable[6].method)(
            v23.fields._current,
            v23.fields._current->klass->vtable[7].methodPtr) & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1C22094(0LL, v14);
LABEL_23:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v9 |= ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[4].method)(
            current,
            current->klass->vtable[5].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_54;
  this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v6->fields.mEventInfoGroupIdx,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
  if ( !this )
    goto LABEL_54;
  v16 = this;
  if ( (v9 & ~((unsigned int (__fastcall *)(TitleInfoEventItemControl_o *, const char *))this->klass[1]._1.gc_desc)(
                this,
                this->klass[1]._1.name) & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v17);
    return;
  }
  mEventAlphaAnimRoot_low = LOBYTE(v16->fields.mEventAlphaAnimRoot);
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0LL, 0LL);
  if ( mEventAlphaAnimRoot_low )
  {
    if ( v20 )
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
      sub_1C22094(this, *(_QWORD *)&groupId);
    }
LABEL_36:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_54;
    v21 = 0;
  }
  else
  {
    if ( v20 )
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
    v21 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21, 0LL);
  if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, const char *))v16->klass[1]._1.gc_desc)(
          v16,
          v16->klass[1]._1.name) & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
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
  if ( (byte_4BDB174 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4BDB174 = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C22094(this, *(_QWORD *)&groupIdx);
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
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int v4; // w8
  int size; // w9
  int32_t v6; // w8

  v2 = this;
  if ( (byte_4BDB173 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4BDB173 = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  v4 = v2->fields.mEventInfoGroupIdx + 1;
  v2->fields.mEventInfoGroupIdx = v4;
  if ( !mEventInfoGroups )
    sub_1C22094(this, method);
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


void __fastcall TitleInfoEventItemControl__SetupEventItem(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        System_Int32_array *iconIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  EventRaidMaster_o *v15; // x26
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x25
  int v17; // w26
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x6

  if ( (byte_4BDB16E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB16E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1C22094(Instance, v14);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, iconIds, dispTypes, titleImageId, v19);
}


void __fastcall TitleInfoEventItemControl__SetupEventItemOnFixed(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  __int64 v13; // x1
  Il2CppObject *klass; // x0
  UnityEngine_Object_o *gameObject; // x25
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v25; // x24
  int64_t v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BDB16F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB16F = 1;
  }
  p_mEventItemInfo = (PartyOrganizationUtility_o *)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)p_mEventItemInfo->klass;
    if ( !p_mEventItemInfo->klass )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    p_mEventItemInfo->klass = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mEventItemInfo, 0LL, v16, v17, v18, v19, v20, v21);
  }
  klass = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_16;
  DataManager__GetMasterData_object_(
    (DataManager_o *)klass,
    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v25 = (UnityEngine_GameObject_o *)v23;
  GameObjectExtensions__SafeSetParent_34803616((UnityEngine_GameObject_o *)v23, mEventRoot, 0LL);
  if ( !v25
    || (klass = UnityEngine_GameObject__GetComponent_object_(
                  v25,
                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL )
  {
LABEL_16:
    sub_1C22094(klass, v13);
  }
  v26 = (int64_t)klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    0LL,
    dispTypes,
    eventId,
    titleImageId,
    0LL);
  p_mEventItemInfo->klass = (PartyOrganizationUtility_c *)v26;
  sub_1C21DDC(p_mEventItemInfo, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall TitleInfoEventItemControl__SetupEventItemOnLoop(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        System_Int32_array *iconIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v16; // x25
  Il2CppObject *v17; // x25
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8

  if ( (byte_4BDB170 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB170 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v16,
    (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot,
    0LL);
  if ( !v16
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)v16,
                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0LL
    || (v17 = (Il2CppObject *)Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          iconIds,
          dispTypes,
          eventId,
          titleImageId,
          0LL),
        (Instance = (DataManager_o *)this->fields.mEventInfoGroups) == 0LL)
    || (v24 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v25 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v24) )
  {
LABEL_13:
    sub_1C22094(Instance, v14);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      v17,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v27 + 32) = v17;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  __int64 v8; // x1
  AlphaTransitionCalculator_o *Instance; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v12; // s8
  TitleInfoControl_c *v13; // x0
  const MethodInfo *v14; // x3
  System_Action_o *onChangedEventGroup; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct AlphaTransitionCalculator_o *v22; // x8

  if ( (byte_4BDB176 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TitleInfoControl_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_float__Update__);
    sub_1C21E38(&Method_TransitionCalculator_float__get_Current__);
    byte_4BDB176 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0LL, 0LL)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v6) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_390F058 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v12 = realtimeSinceStartup;
              v13 = TitleInfoControl_TypeInfo;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                v13 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v12 - mEventAlphaAnimTimeOld) >= v13->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
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
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v14);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0LL;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.onChangedEventGroup,
            0LL,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          ActionExtensions__Call(onChangedEventGroup, 0LL);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v22 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v22 )
        {
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
              Instance,
              Instance->klass[1]._1.declaringType,
              v22->fields._Current_k__BackingField);
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
      sub_1C22094(Instance, v8);
    }
  }
}


bool __fastcall TitleInfoEventItemControl___DelayedDestroy_b__41_0(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_4BDB17A & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4BDB17A = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C22094(this, method);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  int32_t _1__state; // w8
  struct TitleInfoEventItemControl_o *_4__this; // x19
  System_Collections_Generic_List_object__o *v5; // x22
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o **p_oldEventInfoGroups_5__2; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *oldEventInfoGroups_5__2; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x0
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_object__o *mEventInfoGroups; // x0
  UnityEngine_Object_o *v35; // x20
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v36; // x8
  int32_t v37; // w2
  int v38; // w9
  System_Func_bool__o *v39; // x21
  UnityEngine_WaitUntil_o *v40; // x19
  Il2CppObject **p__2__current; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDB17B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDB17B = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        oldEventInfoGroups_5__2,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
      v50 = v49;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v50,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
        if ( !v27 )
          break;
        current = v50.fields._current;
        if ( !v50.fields._current )
          sub_1C22094(v27, v28);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50.fields._current, 0LL);
        if ( !gameObject )
          sub_1C22094(0LL, v31);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        if ( !_4__this )
          sub_1C22094(v32, v33);
        mEventInfoGroups = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
        if ( !mEventInfoGroups )
          sub_1C22094(0LL, v33);
        System_Collections_Generic_List_object___Remove(
          mEventInfoGroups,
          current,
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
        v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v35, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v50,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
      if ( !_4__this )
        goto LABEL_43;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__First_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.mEventInfoGroups,
                                                                               (const MethodInfo_2FD0884 *)Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    this->fields._oldEventInfoGroups_5__2 = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v5;
    p_oldEventInfoGroups_5__2 = &this->fields._oldEventInfoGroups_5__2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._oldEventInfoGroups_5__2,
      (int64_t)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( _4__this )
    {
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
      if ( oldEventInfoGroups_5__2 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          oldEventInfoGroups_5__2,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
        v50 = v49;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v50,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
        {
          v21 = (System_Collections_Generic_List_object__o *)*p_oldEventInfoGroups_5__2;
          if ( !*p_oldEventInfoGroups_5__2 )
            sub_1C22094(0LL, v14);
          v22 = v50.fields._current;
          items = v21->fields._items;
          v24 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1C22094(v21, v22);
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v22,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v22;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v22, v15, v16, v17, v18, v19, v20);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v50,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
        v36 = _4__this->fields.mEventInfoGroups;
        if ( v36 )
        {
          v37 = v36->fields._size;
          v38 = v36->fields._version + 1;
          v36->fields._size = 0;
          v36->fields._version = v38;
          if ( v37 >= 1 )
            System_Array__Clear((System_Array_o *)v36->fields._items, 0, v37, 0LL);
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
              v39 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v39,
                (Il2CppObject *)_4__this,
                Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__,
                0LL);
              v40 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v40, v39, 0LL);
              this->fields.__2__current = (Il2CppObject *)v40;
              p__2__current = &this->fields.__2__current;
              sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v40, v42, v43, v44, v45, v46, v47);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C22094(oldEventInfoGroups_5__2, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TitleInfoEventItemControl__DelayedDestroy_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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