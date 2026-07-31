void TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  if ( (byte_5937273 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventItemControl_TypeInfo);
    byte_5937273 = 1;
  }
  TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM = 7;
}


void TitleInfoEventItemControl___ctor(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7

  if ( (byte_5937265 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    byte_5937265 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventInfoGroups,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.titleInfoControl = titleInfoControl;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)titleInfoControl,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.mEventRoot = eventRoot;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventRoot,
    (int32_t)eventRoot,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventAlphaAnimRoot,
    (int32_t)eventAlphaAnimRoot,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alphaAnimChangeBtn,
    (int32_t)alphaAnimChangeBtn,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTitleInfoEventItemPrefab,
    (int32_t)titleInfoEventItemPrefab,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (int32_t)defeatCntAlphaAnimChangeBtn,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
}


System_Collections_IEnumerator_o *TitleInfoEventItemControl__DelayedDestroy(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937267 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
    byte_5937267 = 1;
  }
  v3 = sub_21FFEBC(TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_c *v22; // x8
  UnityEngine_Component_o *v23; // x21
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int32_t size; // w2
  int v29; // w9
  System_Collections_IEnumerator_o *v30; // [xsp+28h] [xbp-38h]

  if ( (byte_5937266 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5937266 = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_41;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_41;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0);
  v30 = Enumerator;
  while ( 1 )
  {
    if ( !v30 )
      goto LABEL_39;
    klass = v30->klass;
    v7 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_2237E2C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v30, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v30->klass;
    v11 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_18:
      v13 = sub_2237E2C(v30, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v30,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_21FFECC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_220024C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_39:
      sub_21FFECC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)sub_21FFDA4(v30, System_IDisposable_TypeInfo);
  if ( mEventAlphaAnimRoot )
  {
    v22 = mEventAlphaAnimRoot->klass;
    v23 = mEventAlphaAnimRoot;
    v24 = *(unsigned __int16 *)&mEventAlphaAnimRoot->klass->_2.rank;
    if ( *(_WORD *)&mEventAlphaAnimRoot->klass->_2.rank )
    {
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_31;
      }
      v26 = (__int64)&v22->vtable + 16 * *v25;
    }
    else
    {
LABEL_31:
      v26 = sub_2237E2C(mEventAlphaAnimRoot, System_IDisposable_TypeInfo, 0);
    }
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD))v26)(
                                                       v23,
                                                       *(_QWORD *)(v26 + 8));
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_41:
    sub_21FFECC(mEventAlphaAnimRoot, method);
  size = mEventInfoGroups->fields._size;
  v29 = mEventInfoGroups->fields._version + 1;
  mEventInfoGroups->fields._size = 0;
  mEventInfoGroups->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventInfoGroups->fields._items, 0, size, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  TitleInfoEventItemControl_c *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  float v14; // s8
  TitleInfoControl_c *v15; // x0
  System_Func_float__float__float__float__o *v16; // x20
  AlphaTransitionCalculator_o *v17; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593726F & 1) == 0 )
  {
    sub_21FFC50(&AlphaTransitionCalculator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoControl_TypeInfo);
    sub_21FFC50(&TitleInfoEventItemControl_TypeInfo);
    byte_593726F = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId, method);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0, 0) )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(this, 0, eventId, v6);
    mEventAlphaAnimRoot = this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_13;
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))mEventAlphaAnimRoot->klass->vtable._8_set_alpha.methodPtr)(
      mEventAlphaAnimRoot,
      mEventAlphaAnimRoot->klass->vtable._8_set_alpha.method,
      1.0);
    this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
    v11 = TitleInfoEventItemControl_TypeInfo;
    if ( !*(&TitleInfoEventItemControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo, v9, v10);
      v11 = TitleInfoEventItemControl_TypeInfo;
    }
    v14 = ChangedFPSUtil__CovertFrameNumToSecond(v11->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0);
    v15 = TitleInfoControl_TypeInfo;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v12, v13);
      v15 = TitleInfoControl_TypeInfo;
    }
    v16 = ExtraEasing__AsymptoticSeriesFloat(
            v15->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0);
    v17 = (AlphaTransitionCalculator_o *)sub_21FFEBC(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v17, v14, v16, 0);
    this->fields.ownEventItemUiAlphaCalculator = v17;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_ownEventItemUiAlphaCalculator,
      (int32_t)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_13:
      sub_21FFECC(mEventAlphaAnimRoot, v7);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0);
  }
}


bool TitleInfoEventItemControl__IsEventInfoGroups(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_593726B & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_593726B = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_21FFECC(this, method);
  return mEventInfoGroups->fields._size > 1;
}


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventItemControl__IsReprintLastWarRaid(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *ReprintLastWarRaidEventIdList; // x8
  int max_length; // w9
  int v7; // w10
  int32_t v8; // w12

  if ( (byte_5937272 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5937272 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&eventId, method);
    v4 = BalanceConfig_TypeInfo;
  }
  ReprintLastWarRaidEventIdList = v4->static_fields->ReprintLastWarRaidEventIdList;
  if ( !ReprintLastWarRaidEventIdList )
    goto LABEL_18;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&eventId, method);
    v4 = BalanceConfig_TypeInfo;
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
      goto LABEL_21;
  }
  if ( !ReprintLastWarRaidEventIdList->max_length )
  {
LABEL_18:
    LOBYTE(v4) = 0;
    return (char)v4;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&eventId, method);
    ReprintLastWarRaidEventIdList = BalanceConfig_TypeInfo->static_fields->ReprintLastWarRaidEventIdList;
    if ( !ReprintLastWarRaidEventIdList )
LABEL_21:
      sub_21FFECC(v4, *(_QWORD *)&eventId);
  }
  max_length = ReprintLastWarRaidEventIdList->max_length;
  if ( max_length < 1 )
    goto LABEL_18;
  v7 = 0;
  do
  {
    if ( max_length == v7 )
      sub_21FFED4(v4);
    v8 = ReprintLastWarRaidEventIdList->m_Items[v7];
    v4 = (BalanceConfig_c *)(v8 == eventId);
    if ( v8 == eventId )
      break;
  }
  while ( (max_length & ~(max_length >> 31)) - 1 != v7++ );
  return (char)v4;
}


void TitleInfoEventItemControl__NextDispEventInfoGroup(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v3);
}


void TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_5937271 & 1) == 0 )
  {
    sub_21FFC50(&Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    byte_5937271 = 1;
  }
  if ( TitleInfoEventItemControl__IsEventInfoGroups(this, method) )
  {
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
    if ( !mEventAlphaAnimRoot )
      goto LABEL_12;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mEventAlphaAnimRoot, 0);
    if ( !mEventAlphaAnimRoot )
      goto LABEL_12;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mEventAlphaAnimRoot, 0) )
      return;
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( !mEventAlphaAnimRoot )
LABEL_12:
      sub_21FFECC(mEventAlphaAnimRoot, v3);
    AlphaTransitionCalculator__MakeFadeOutFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0);
    v5 = Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__;
    if ( (*((_BYTE *)Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__SetDispEventInfoGroup(
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
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  int v21; // w8
  bool v22; // w1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_593726C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    this = (TitleInfoEventItemControl_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593726C = 1;
  }
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  memset(&v24, 0, sizeof(v24));
  if ( !mEventInfoGroups )
    goto LABEL_56;
  if ( mEventInfoGroups->fields._size < 1 )
    return;
  if ( groupId < 0 )
    TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  else
    v6->fields.mEventInfoGroupIdx = groupId;
  IsReprintLastWarRaid = TitleInfoEventItemControl__IsReprintLastWarRaid(this, eventId, *(const MethodInfo **)&eventId);
  if ( IsReprintLastWarRaid )
  {
    this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
    if ( !this )
      goto LABEL_56;
    this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6->fields.mEventInfoGroupIdx,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    if ( !this )
      goto LABEL_56;
    if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
            this,
            *(_QWORD *)&this->klass[1]._1.byval_arg.bits)
        & 1) != 0 )
      TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, *(const MethodInfo **)&groupId);
  }
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v9 = 0;
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v10 )
      break;
    current = v24.fields._current;
    if ( !IsReprintLastWarRaid )
    {
      if ( !v24.fields._current )
        sub_21FFECC(v10, v11);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24.fields._current, 0);
      if ( !gameObject )
        sub_21FFECC(0, v15);
      goto LABEL_23;
    }
    if ( !v24.fields._current )
      sub_21FFECC(v10, v11);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v24.fields._current->klass->vtable[6].methodPtr)(
            v24.fields._current,
            v24.fields._current->klass->vtable[6].method)
        & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !gameObject )
        sub_21FFECC(0, v14);
LABEL_23:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    v9 |= ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
            current,
            current->klass->vtable[4].method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_56;
  this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v6->fields.mEventInfoGroupIdx,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
  if ( !this )
    goto LABEL_56;
  v16 = this;
  if ( (v9
      & ~((unsigned int (__fastcall *)(TitleInfoEventItemControl_o *, void *))this->klass[1]._1.image)(
           this,
           this->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v19);
    return;
  }
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  v21 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( LOBYTE(v16->fields.mEventAlphaAnimRoot) )
  {
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0, 0) )
    {
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( this )
      {
        this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          goto LABEL_36;
        }
      }
LABEL_56:
      sub_21FFECC(this, *(_QWORD *)&groupId);
    }
LABEL_36:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_56;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_56;
    v22 = 0;
  }
  else
  {
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0, 0) )
    {
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( !this )
        goto LABEL_56;
      this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_56;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_56;
    v22 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22, 0);
  if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, void *))v16->klass[1]._1.image)(
          v16,
          v16->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    if ( !this )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__SetEventGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t groupIdx,
        bool isNonSe,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v6; // x20
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int size; // w8
  int v9; // w10
  int32_t v10; // w8

  v6 = this;
  if ( (byte_593726E & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_593726E = 1;
  }
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_21FFECC(this, *(_QWORD *)&groupIdx);
  if ( v6->fields.mEventInfoGroupIdx != groupIdx )
  {
    size = mEventInfoGroups->fields._size;
    v9 = size - 1;
    if ( groupIdx - 1 >= 0 )
      v9 = groupIdx - 1;
    if ( groupIdx - 1 >= size )
      v10 = 0;
    else
      v10 = v9;
    v6->fields.mEventInfoGroupIdx = v10;
    if ( !isNonSe )
      TitleInfoEventItemControl__OnClickEventAlphaAnimChangeBtn(v6, *(const MethodInfo **)&groupIdx);
  }
}


void TitleInfoEventItemControl__SetNextEventInfoGroupIndex(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w9
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  int32_t mEventInfoGroupIdx; // w8
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int32_t size; // w9
  int32_t v10; // w8

  if ( (byte_593726D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593726D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  v5 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  ++this->fields.mEventInfoGroupIdx;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  RaidBossHpForceHideGroupIndexList = v4->static_fields->RaidBossHpForceHideGroupIndexList;
  if ( !RaidBossHpForceHideGroupIndexList )
    goto LABEL_15;
  RaidBossHpForceHideGroupIndexList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                                  RaidBossHpForceHideGroupIndexList,
                                                                                  this->fields.mEventInfoGroupIdx,
                                                                                  (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
  mEventInfoGroupIdx = this->fields.mEventInfoGroupIdx;
  if ( ((unsigned __int8)RaidBossHpForceHideGroupIndexList & 1) != 0 )
    this->fields.mEventInfoGroupIdx = ++mEventInfoGroupIdx;
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_15:
    sub_21FFECC(RaidBossHpForceHideGroupIndexList, method);
  size = mEventInfoGroups->fields._size;
  if ( mEventInfoGroupIdx >= size )
  {
    v10 = 0;
  }
  else
  {
    if ( (mEventInfoGroupIdx & 0x80000000) == 0 )
      return;
    v10 = size - 1;
  }
  this->fields.mEventInfoGroupIdx = v10;
}


void TitleInfoEventItemControl__SetupEventItem(
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

  if ( (byte_5937268 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937268 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_12;
  v15 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0);
  Instance = (Il2CppObject *)EventRaidMaster__GetRaidGorupMax(v15, eventId, 0);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v17 = (int)Instance;
  Instance = (Il2CppObject *)TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0);
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
      if ( LODWORD(EventRaidEntityArrayFromEventId->max_length) == 1 )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(Instance, v14);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, iconIds, dispTypes, titleImageId, v19);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__SetupEventItemOnFixed(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  __int64 v13; // x1
  Il2CppObject *klass; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v29; // x24
  Il2CppObject *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5937269 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937269 = 1;
  }
  p_mEventItemInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId, itemIds);
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0, 0) )
  {
    klass = (Il2CppObject *)p_mEventItemInfo->klass;
    if ( !p_mEventItemInfo->klass )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    p_mEventItemInfo->klass = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mEventItemInfo, 0, v18, v19, v20, v21, v22, v23);
  }
  klass = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_16;
  DataManager__GetMasterData_object_(
    (DataManager_o *)klass,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  v27 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v29 = (UnityEngine_GameObject_o *)v27;
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v27, mEventRoot, 0);
  if ( !v29
    || (klass = UnityEngine_GameObject__GetComponent_object_(
                  v29,
                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0 )
  {
LABEL_16:
    sub_21FFECC(klass, v13);
  }
  v30 = klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    0,
    dispTypes,
    eventId,
    titleImageId,
    0);
  p_mEventItemInfo->klass = (MissionNaviTransitionBoardItem_c *)v30;
  sub_21FFBF4(p_mEventItemInfo, (int32_t)v30, v31, v32, v33, v34, v35, v36);
}


void TitleInfoEventItemControl__SetupEventItemOnLoop(
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
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v18; // x25
  Il2CppObject *v19; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *mEventInfoGroups; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0

  if ( (byte_593726A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593726A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v18,
    (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot,
    0);
  if ( !v18
    || (Instance = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)v18,
                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0
    || (v19 = Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          iconIds,
          dispTypes,
          eventId,
          titleImageId,
          0),
        (mEventInfoGroups = (System_Collections_Generic_List_object__o *)this->fields.mEventInfoGroups) == 0)
    || (items = mEventInfoGroups->fields._items,
        v28 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__,
        ++mEventInfoGroups->fields._version,
        !items) )
  {
LABEL_13:
    sub_21FFECC(Instance, v14);
  }
  size = mEventInfoGroups->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mEventInfoGroups,
      v19,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    mEventInfoGroups->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  __int64 v8; // x1
  AlphaTransitionCalculator_o *Instance; // x0
  __int64 v10; // x2
  float realtimeSinceStartup; // s8
  float mEventAlphaAnimTimeOld; // s9
  TitleInfoControl_c *v13; // x0
  const MethodInfo *v14; // x3
  System_Action_o *onChangedEventGroup; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct AlphaTransitionCalculator_o *v22; // x8

  if ( (byte_5937270 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TitleInfoControl_TypeInfo);
    sub_21FFC50(&Method_TransitionCalculator_float__Update__);
    sub_21FFC50(&Method_TransitionCalculator_float__get_Current__);
    byte_5937270 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId, method);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0, 0)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v6) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_3BB5C64 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_34;
          if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
          {
            Instance = this->fields.ownEventItemUiAlphaCalculator;
            if ( !Instance )
              goto LABEL_34;
            if ( AlphaTransitionCalculator__IsFadeInFinished(Instance, 0) )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
              mEventAlphaAnimTimeOld = this->fields.mEventAlphaAnimTimeOld;
              v13 = TitleInfoControl_TypeInfo;
              if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v8, v10);
                v13 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(realtimeSinceStartup - mEventAlphaAnimTimeOld) >= v13->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
              {
                Instance = this->fields.ownEventItemUiAlphaCalculator;
                if ( !Instance )
                  goto LABEL_34;
                AlphaTransitionCalculator__StartFadeOut(Instance, 0);
              }
            }
          }
        }
      }
      Instance = this->fields.ownEventItemUiAlphaCalculator;
      if ( Instance )
      {
        Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = this->fields.ownEventItemUiAlphaCalculator;
          if ( !Instance )
            goto LABEL_34;
          AlphaTransitionCalculator__StartFadeIn(Instance, 0);
          this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v14);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.onChangedEventGroup,
            0,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          ActionExtensions__Call(onChangedEventGroup, 0);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v22 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v22 )
        {
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.element_class)(
              Instance,
              Instance->klass[1]._1.castClass,
              v22->fields._Current_k__BackingField);
            if ( !this->fields.alphaAnimForceDisp )
              return;
            Instance = this->fields.ownEventItemUiAlphaCalculator;
            if ( Instance )
            {
              if ( AlphaTransitionCalculator__IsFadeInFinished(Instance, 0) && this->fields.alphaAnimForceNextCheck )
                *(_WORD *)&this->fields.alphaAnimForceDisp = 0;
              return;
            }
          }
        }
      }
LABEL_34:
      sub_21FFECC(Instance, v8);
    }
  }
}


bool TitleInfoEventItemControl___DelayedDestroy_b__41_0(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_5937274 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_5937274 = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_21FFECC(this, method);
  return mEventInfoGroups->fields._size > 0;
}


bool TitleInfoEventItemControl__get_AlphaAnimForceDisp(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimForceDisp;
}


bool TitleInfoEventItemControl__get_AlphaAnimForceNextCheck(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimForceNextCheck;
}


UIWidget_o *TitleInfoEventItemControl__get_EventAlphaAnimRoot(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventAlphaAnimRoot;
}


float TitleInfoEventItemControl__get_EventAlphaAnimTimeOld(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  return this->fields.mEventAlphaAnimTimeOld;
}


int32_t TitleInfoEventItemControl__get_EventInfoGroupIdx(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  return this->fields.mEventInfoGroupIdx;
}


System_Collections_Generic_List_TitleInfoEventInfoComponent__o *TitleInfoEventItemControl__get_EventInfoGroups(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mEventInfoGroups;
}


bool TitleInfoEventItemControl__get_IsPauseEventAlphaAnim(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  return this->fields.mIsPauseEventAlphaAnim;
}


System_Action_o *TitleInfoEventItemControl__get_OnChangedEventGroupAction(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  return this->fields.onChangedEventGroup;
}


void TitleInfoEventItemControl__set_AlphaAnimForceDisp(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.alphaAnimForceDisp = value;
}


void TitleInfoEventItemControl__set_AlphaAnimForceNextCheck(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.alphaAnimForceNextCheck = value;
}


void TitleInfoEventItemControl__set_EventAlphaAnimTimeOld(
        TitleInfoEventItemControl_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.mEventAlphaAnimTimeOld = value;
}


void TitleInfoEventItemControl__set_EventInfoGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.mEventInfoGroupIdx = value;
}


void TitleInfoEventItemControl__set_EventInfoGroups(
        TitleInfoEventItemControl_o *this,
        System_Collections_Generic_List_TitleInfoEventInfoComponent__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mEventInfoGroups = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventInfoGroups,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventItemControl__set_IsPauseEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.mIsPauseEventAlphaAnim = value;
}


void TitleInfoEventItemControl__set_OnChangedEventGroupAction(
        TitleInfoEventItemControl_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onChangedEventGroup = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onChangedEventGroup,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventItemControl__DelayedDestroy_d__41___ctor(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventItemControl__DelayedDestroy_d__41__MoveNext(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct TitleInfoEventItemControl_o *_4__this; // x19
  System_Collections_Generic_List_object__o *v5; // x22
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o **p_oldEventInfoGroups_5__2; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *oldEventInfoGroups_5__2; // x0
  Il2CppObject *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *mEventInfoGroups; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v37; // x8
  int32_t v38; // w2
  int v39; // w9
  System_Func_bool__o *v40; // x21
  UnityEngine_WaitUntil_o *v41; // x19
  Il2CppObject **p__2__current; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5937275 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_5937275 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  memset(&v51, 0, sizeof(v51));
  if ( _1__state == 1 )
  {
    oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)this->fields._oldEventInfoGroups_5__2;
    this->fields.__1__state = -1;
    if ( !oldEventInfoGroups_5__2 )
      goto LABEL_42;
    if ( oldEventInfoGroups_5__2->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v50,
        oldEventInfoGroups_5__2,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
      v51 = v50;
      v50.fields._list = 0;
      *(_QWORD *)&v50.fields._index = &v51;
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
        if ( !v26 )
          break;
        current = v51.fields._current;
        if ( !v51.fields._current )
          sub_21FFECC(v26, v27);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v51.fields._current, 0);
        if ( !gameObject )
          sub_21FFECC(0, v30);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        if ( !_4__this )
          sub_21FFECC(v31, v32);
        mEventInfoGroups = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
        if ( !mEventInfoGroups )
          sub_21FFECC(0, v32);
        System_Collections_Generic_List_object___Remove(
          mEventInfoGroups,
          current,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
        v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
        UnityEngine_Object__Destroy_83246496(v36, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
      if ( !_4__this )
        goto LABEL_42;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__First_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.mEventInfoGroups,
                                                                               (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_42;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)oldEventInfoGroups_5__2,
                                                                               0);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)oldEventInfoGroups_5__2, 1, 0);
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    this->fields._oldEventInfoGroups_5__2 = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v5;
    p_oldEventInfoGroups_5__2 = &this->fields._oldEventInfoGroups_5__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._oldEventInfoGroups_5__2,
      (int32_t)v5,
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v50,
          oldEventInfoGroups_5__2,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
        v51 = v50;
        v50.fields._list = 0;
        *(_QWORD *)&v50.fields._index = &v51;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v51,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
        {
          v21 = (System_Collections_Generic_List_object__o *)*p_oldEventInfoGroups_5__2;
          if ( !*p_oldEventInfoGroups_5__2
            || (items = v21->fields._items,
                v14 = v51.fields._current,
                v23 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__,
                ++v21->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v14);
          }
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v14,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v14;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v51,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
        v37 = _4__this->fields.mEventInfoGroups;
        if ( v37 )
        {
          v38 = v37->fields._size;
          v39 = v37->fields._version + 1;
          v37->fields._size = 0;
          v37->fields._version = v39;
          if ( v38 >= 1 )
            System_Array__Clear((System_Array_o *)v37->fields._items, 0, v38, 0);
          oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventAlphaAnimRoot;
          if ( oldEventInfoGroups_5__2 )
          {
            ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))oldEventInfoGroups_5__2->klass->vtable._8_unknown.methodPtr)(
              oldEventInfoGroups_5__2,
              oldEventInfoGroups_5__2->klass->vtable._8_unknown.method,
              1.0);
            oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.ownEventItemUiAlphaCalculator;
            if ( oldEventInfoGroups_5__2 )
            {
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)oldEventInfoGroups_5__2, 0);
              _4__this->fields.mEventAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
              v40 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v40,
                (Il2CppObject *)_4__this,
                Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__,
                0);
              v41 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v41, v40, 0);
              this->fields.__2__current = (Il2CppObject *)v41;
              p__2__current = &this->fields.__2__current;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v41, v43, v44, v45, v46, v47, v48);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_42:
    sub_21FFECC(oldEventInfoGroups_5__2, method);
  }
  return 0;
}


Il2CppObject *TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_IEnumerator_Reset(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TitleInfoEventItemControl__DelayedDestroy_d__41_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TitleInfoEventItemControl__DelayedDestroy_d__41__System_Collections_IEnumerator_get_Current(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventItemControl__DelayedDestroy_d__41__System_IDisposable_Dispose(
        TitleInfoEventItemControl__DelayedDestroy_d__41_o *this,
        const MethodInfo *method)
{
  ;
}