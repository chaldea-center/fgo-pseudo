void TitleInfoEventItemControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C41BD7 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventItemControl_TypeInfo);
    byte_4C41BD7 = 1;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C41BC9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    byte_4C41BC9 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
  this->fields.mEventInfoGroups = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEventInfoGroups, (int32_t)v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.titleInfoControl = titleInfoControl;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)titleInfoControl, v18, v19);
  this->fields.mEventRoot = eventRoot;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEventRoot, (int32_t)eventRoot, v20, v21);
  this->fields.mEventAlphaAnimRoot = eventAlphaAnimRoot;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEventAlphaAnimRoot, (int32_t)eventAlphaAnimRoot, v22, v23);
  this->fields.alphaAnimChangeBtn = alphaAnimChangeBtn;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.alphaAnimChangeBtn, (int32_t)alphaAnimChangeBtn, v24, v25);
  this->fields.mTitleInfoEventItemPrefab = titleInfoEventItemPrefab;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.mTitleInfoEventItemPrefab,
    (int32_t)titleInfoEventItemPrefab,
    v26,
    v27);
  this->fields.defeatCntAlphaAnimChangeBtn = defeatCntAlphaAnimChangeBtn;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.defeatCntAlphaAnimChangeBtn,
    (int32_t)defeatCntAlphaAnimChangeBtn,
    v28,
    v29);
}


System_Collections_IEnumerator_o *TitleInfoEventItemControl__DelayedDestroy(
        TitleInfoEventItemControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C41BCB & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
    byte_4C41BCB = 1;
  }
  v3 = sub_1C372A4(TitleInfoEventItemControl__DelayedDestroy_d__41_TypeInfo);
  TitleInfoEventItemControl__DelayedDestroy_d__41___ctor((TitleInfoEventItemControl__DelayedDestroy_d__41_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void TitleInfoEventItemControl__Destroy(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_c *v16; // x8
  UnityEngine_Component_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int32_t size; // w2
  int v23; // w9

  if ( (byte_4C41BCA & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C41BCA = 1;
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot;
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mEventAlphaAnimRoot, 0);
  if ( !mEventAlphaAnimRoot )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)mEventAlphaAnimRoot, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_10;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_17:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_38;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C37574(v13);
LABEL_38:
      sub_1C372B4(v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  mEventAlphaAnimRoot = (UnityEngine_Component_o *)sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( mEventAlphaAnimRoot )
  {
    v16 = mEventAlphaAnimRoot->klass;
    v17 = mEventAlphaAnimRoot;
    v18 = *(unsigned __int16 *)&mEventAlphaAnimRoot->klass->_2.rank;
    if ( *(_WORD *)&mEventAlphaAnimRoot->klass->_2.rank )
    {
      v19 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_30;
      }
      v20 = (__int64)&v16->vtable + 16 * *v19;
    }
    else
    {
LABEL_30:
      v20 = sub_1C87870(mEventAlphaAnimRoot, System_IDisposable_TypeInfo, 0);
    }
    mEventAlphaAnimRoot = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD))v20)(
                                                       v17,
                                                       *(_QWORD *)(v20 + 8));
  }
  mEventInfoGroups = this->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
LABEL_39:
    sub_1C372B4(mEventAlphaAnimRoot);
  size = mEventInfoGroups->fields._size;
  v23 = mEventInfoGroups->fields._version + 1;
  mEventInfoGroups->fields._size = 0;
  mEventInfoGroups->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventInfoGroups->fields._items, 0, size, 0);
}


void TitleInfoEventItemControl__InitEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x3
  struct UIWidget_o *mEventAlphaAnimRoot; // x0
  TitleInfoEventItemControl_c *v8; // x0
  float v9; // s8
  TitleInfoControl_c *v10; // x0
  System_Func_float__float__float__float__o *v11; // x20
  AlphaTransitionCalculator_o *v12; // x21
  struct AlphaTransitionCalculator_o **p_ownEventItemUiAlphaCalculator; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C41BD3 & 1) == 0 )
  {
    sub_1C37058(&AlphaTransitionCalculator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TitleInfoControl_TypeInfo);
    sub_1C37058(&TitleInfoEventItemControl_TypeInfo);
    byte_4C41BD3 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v8 = TitleInfoEventItemControl_TypeInfo;
    if ( !TitleInfoEventItemControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemControl_TypeInfo);
      v8 = TitleInfoEventItemControl_TypeInfo;
    }
    v9 = ChangedFPSUtil__CovertFrameNumToSecond(v8->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0);
    v10 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v10 = TitleInfoControl_TypeInfo;
    }
    v11 = ExtraEasing__AsymptoticSeriesFloat(
            v10->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)TitleInfoEventItemControl_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
            0);
    v12 = (AlphaTransitionCalculator_o *)sub_1C372A4(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v12, v9, v11, 0);
    this->fields.ownEventItemUiAlphaCalculator = v12;
    p_ownEventItemUiAlphaCalculator = &this->fields.ownEventItemUiAlphaCalculator;
    sub_1C36FFC((CGThumbnailListItem_o *)p_ownEventItemUiAlphaCalculator, (int32_t)v12, v14, v15);
    mEventAlphaAnimRoot = (struct UIWidget_o *)*p_ownEventItemUiAlphaCalculator;
    if ( !*p_ownEventItemUiAlphaCalculator )
LABEL_13:
      sub_1C372B4(mEventAlphaAnimRoot);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0);
  }
}


bool TitleInfoEventItemControl__IsEventInfoGroups(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_4C41BCF & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4C41BCF = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C372B4(this);
  return mEventInfoGroups->fields._size > 1;
}


bool TitleInfoEventItemControl__IsReprintLastWarRaid(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *ReprintLastWarRaidEventIdList; // x8
  int max_length; // w9
  bool v7; // w10
  int i; // w11

  if ( (byte_4C41BD6 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C41BD6 = 1;
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
    if ( !ReprintLastWarRaidEventIdList->max_length )
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
        sub_1C372B4(v4);
    }
    max_length = ReprintLastWarRaidEventIdList->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1C372BC(v4);
        if ( ReprintLastWarRaidEventIdList->m_Items[i] == eventId )
          break;
        ++i;
      }
    }
    LOBYTE(ReprintLastWarRaidEventIdList) = !v7;
  }
  return (unsigned __int8)ReprintLastWarRaidEventIdList & 1;
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
  UnityEngine_Component_o *mEventAlphaAnimRoot; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C41BD5 & 1) == 0 )
  {
    sub_1C37058(&Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    byte_4C41BD5 = 1;
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
      sub_1C372B4(mEventAlphaAnimRoot);
    AlphaTransitionCalculator__MakeFadeOutFinished((AlphaTransitionCalculator_o *)mEventAlphaAnimRoot, 0);
    v4 = Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__;
    if ( (*((_BYTE *)Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_TitleInfoEventItemControl_OnClickEventAlphaAnimChangeBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
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
  const MethodInfo *v9; // x1
  int v10; // w24
  _BOOL8 v11; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventItemControl_o *v14; // x21
  const MethodInfo *v15; // x3
  int mEventAlphaAnimRoot_low; // w22
  UnityEngine_Object_o *defeatCntAlphaAnimChangeBtn; // x20
  bool v18; // w0
  bool v19; // w1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4C41BD0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    this = (TitleInfoEventItemControl_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41BD0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  mEventInfoGroups = v6->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    goto LABEL_54;
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
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6->fields.mEventInfoGroupIdx,
                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
    if ( !this )
      goto LABEL_54;
    if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
            this,
            *(_QWORD *)&this->klass[1]._1.byval_arg.bits)
        & 1) != 0 )
      TitleInfoEventItemControl__SetNextEventInfoGroupIndex(v6, v9);
  }
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v10 = 0;
  v21 = v20;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    if ( !v11 )
      break;
    current = v21.fields._current;
    if ( !IsReprintLastWarRaid )
    {
      if ( !v21.fields._current )
        sub_1C372B4(v11);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21.fields._current, 0);
      if ( !gameObject )
        sub_1C372B4(0);
      goto LABEL_23;
    }
    if ( !v21.fields._current )
      sub_1C372B4(v11);
    if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v21.fields._current->klass->vtable[6].methodPtr)(
            v21.fields._current,
            v21.fields._current->klass->vtable[6].method)
        & 1) == 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !gameObject )
        sub_1C372B4(0);
LABEL_23:
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    v10 |= ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[4].methodPtr)(
             current,
             current->klass->vtable[4].method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  this = (TitleInfoEventItemControl_o *)v6->fields.mEventInfoGroups;
  if ( !this )
    goto LABEL_54;
  this = (TitleInfoEventItemControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v6->fields.mEventInfoGroupIdx,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Item__);
  if ( !this )
    goto LABEL_54;
  v14 = this;
  if ( (v10
      & ~((unsigned int (__fastcall *)(TitleInfoEventItemControl_o *, void *))this->klass[1]._1.image)(
           this,
           this->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    TitleInfoEventItemControl__SetDispEventInfoGroup(v6, -1, eventId, v15);
    return;
  }
  mEventAlphaAnimRoot_low = LOBYTE(v14->fields.mEventAlphaAnimRoot);
  defeatCntAlphaAnimChangeBtn = (UnityEngine_Object_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality(defeatCntAlphaAnimChangeBtn, 0, 0);
  if ( mEventAlphaAnimRoot_low )
  {
    if ( v18 )
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
LABEL_54:
      sub_1C372B4(this);
    }
LABEL_36:
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_54;
    v19 = 0;
  }
  else
  {
    if ( v18 )
    {
      this = (TitleInfoEventItemControl_o *)v6->fields.defeatCntAlphaAnimChangeBtn;
      if ( !this )
        goto LABEL_54;
      this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (TitleInfoEventItemControl_o *)v6->fields.alphaAnimChangeBtn;
    if ( !this )
      goto LABEL_54;
    this = (TitleInfoEventItemControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_54;
    v19 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0);
  if ( (((__int64 (__fastcall *)(TitleInfoEventItemControl_o *, void *))v14->klass[1]._1.image)(
          v14,
          v14->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    this = (TitleInfoEventItemControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
    if ( !this )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventItemControl__SetEventGroupIdx(
        TitleInfoEventItemControl_o *this,
        int32_t groupIdx,
        const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v4; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8
  int size; // w8
  int v7; // w10
  int32_t v8; // w8

  v4 = this;
  if ( (byte_4C41BD2 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4C41BD2 = 1;
  }
  mEventInfoGroups = v4->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C372B4(this);
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


void TitleInfoEventItemControl__SetNextEventInfoGroupIndex(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x9
  int v4; // w8
  int size; // w9
  int32_t v6; // w8

  v2 = this;
  if ( (byte_4C41BD1 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4C41BD1 = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  v4 = v2->fields.mEventInfoGroupIdx + 1;
  v2->fields.mEventInfoGroupIdx = v4;
  if ( !mEventInfoGroups )
    sub_1C372B4(this);
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
  EventRaidMaster_o *v14; // x26
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x25
  int v16; // w26
  const MethodInfo *v17; // x5
  const MethodInfo *v18; // x6

  if ( (byte_4C41BCC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C41BCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_12;
  v14 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0);
  Instance = (Il2CppObject *)EventRaidMaster__GetRaidGorupMax(v14, eventId, 0);
  if ( !this->fields.titleInfoControl )
    goto LABEL_12;
  v16 = (int)Instance;
  Instance = (Il2CppObject *)TitleInfoControl__IsSingleRaid(this->fields.titleInfoControl, eventId, 0);
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
      if ( LODWORD(EventRaidEntityArrayFromEventId->max_length) == 1 )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
LABEL_11:
  TitleInfoEventItemControl__SetupEventItemOnLoop(this, eventId, itemIds, iconIds, dispTypes, titleImageId, v18);
}


void TitleInfoEventItemControl__SetupEventItemOnFixed(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        System_Int32_array *itemIds,
        TitleInfoEventItemComponent_DispType_array *dispTypes,
        int32_t titleImageId,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mEventItemInfo; // x23
  UnityEngine_Object_o *mEventItemInfo; // x25
  Il2CppObject *klass; // x0
  UnityEngine_Object_o *gameObject; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v18; // x0
  UnityEngine_GameObject_o *mEventRoot; // x1
  UnityEngine_GameObject_o *v20; // x24
  Il2CppObject *v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C41BCD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C41BCD = 1;
  }
  p_mEventItemInfo = (CGThumbnailListItem_o *)&this->fields.mEventItemInfo;
  mEventItemInfo = (UnityEngine_Object_o *)this->fields.mEventItemInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEventItemInfo, 0, 0) )
  {
    klass = (Il2CppObject *)p_mEventItemInfo->klass;
    if ( !p_mEventItemInfo->klass )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    p_mEventItemInfo->klass = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEventItemInfo, 0, v15, v16);
  }
  klass = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !klass )
    goto LABEL_16;
  DataManager__GetMasterData_object_(
    (DataManager_o *)klass,
    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  mEventRoot = this->fields.mEventRoot;
  v20 = (UnityEngine_GameObject_o *)v18;
  GameObjectExtensions__SafeSetParent_36138184((UnityEngine_GameObject_o *)v18, mEventRoot, 0);
  if ( !v20
    || (klass = UnityEngine_GameObject__GetComponent_object_(
                  v20,
                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0 )
  {
LABEL_16:
    sub_1C372B4(klass);
  }
  v21 = klass;
  TitleInfoEventItemComponent__Setup(
    (TitleInfoEventItemComponent_o *)klass,
    itemIds,
    0,
    dispTypes,
    eventId,
    titleImageId,
    0);
  p_mEventItemInfo->klass = (CGThumbnailListItem_c *)v21;
  sub_1C36FFC(p_mEventItemInfo, (int32_t)v21, v22, v23);
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
  DataManager_o *Instance; // x0
  Il2CppObject *mTitleInfoEventItemPrefab; // x25
  Il2CppObject *v15; // x25
  Il2CppObject *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8

  if ( (byte_4C41BCE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C41BCE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  mTitleInfoEventItemPrefab = (Il2CppObject *)this->fields.mTitleInfoEventItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object_(
          mTitleInfoEventItemPrefab,
          (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v15,
    (UnityEngine_Component_o *)this->fields.mEventAlphaAnimRoot,
    0);
  if ( !v15
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)v15,
                                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventItemComponent___)) == 0
    || (v16 = (Il2CppObject *)Instance,
        TitleInfoEventItemComponent__Setup(
          (TitleInfoEventItemComponent_o *)Instance,
          itemIds,
          iconIds,
          dispTypes,
          eventId,
          titleImageId,
          0),
        (Instance = (DataManager_o *)this->fields.mEventInfoGroups) == 0)
    || (m_CachedPtr = Instance->fields.m_CachedPtr,
        v20 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_13:
    sub_1C372B4(Instance);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      v16,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v22 + 32) = v16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v16, v17, v18);
  }
}


void TitleInfoEventItemControl__UpdateEventAlphaAnim(
        TitleInfoEventItemControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mEventRoot; // x21
  const MethodInfo *v6; // x1
  TransitionCalculator_float__o *ownEventItemUiAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  float realtimeSinceStartup; // s0
  float mEventAlphaAnimTimeOld; // s9
  float v11; // s8
  TitleInfoControl_c *v12; // x0
  const MethodInfo *v13; // x3
  System_Action_o *onChangedEventGroup; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct AlphaTransitionCalculator_o *v17; // x8

  if ( (byte_4C41BD4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TitleInfoControl_TypeInfo);
    sub_1C37058(&Method_TransitionCalculator_float__Update__);
    sub_1C37058(&Method_TransitionCalculator_float__get_Current__);
    byte_4C41BD4 = 1;
  }
  mEventRoot = (UnityEngine_Object_o *)this->fields.mEventRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mEventRoot, 0, 0)
    && (TitleInfoEventItemControl__IsEventInfoGroups(this, v6) || this->fields.alphaAnimForceDisp) )
  {
    ownEventItemUiAlphaCalculator = (TransitionCalculator_float__o *)this->fields.ownEventItemUiAlphaCalculator;
    if ( ownEventItemUiAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        ownEventItemUiAlphaCalculator,
        (const MethodInfo_3A66194 *)Method_TransitionCalculator_float__Update__);
      if ( !this->fields.mIsPauseEventAlphaAnim )
      {
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
        {
          Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v11 = realtimeSinceStartup;
              v12 = TitleInfoControl_TypeInfo;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                v12 = TitleInfoControl_TypeInfo;
              }
              if ( (float)(v11 - mEventAlphaAnimTimeOld) >= v12->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
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
          TitleInfoEventItemControl__SetDispEventInfoGroup(this, -1, eventId, v13);
          onChangedEventGroup = this->fields.onChangedEventGroup;
          this->fields.onChangedEventGroup = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onChangedEventGroup, 0, v15, v16);
          ActionExtensions__Call(onChangedEventGroup, 0);
          if ( this->fields.alphaAnimForceDisp )
            this->fields.alphaAnimForceNextCheck = 1;
        }
        v17 = this->fields.ownEventItemUiAlphaCalculator;
        if ( v17 )
        {
          Instance = (AlphaTransitionCalculator_o *)this->fields.mEventAlphaAnimRoot;
          if ( Instance )
          {
            ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.element_class)(
              Instance,
              Instance->klass[1]._1.castClass,
              v17->fields._Current_k__BackingField);
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
      sub_1C372B4(Instance);
    }
  }
}


bool TitleInfoEventItemControl___DelayedDestroy_b__41_0(TitleInfoEventItemControl_o *this, const MethodInfo *method)
{
  TitleInfoEventItemControl_o *v2; // x19
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *mEventInfoGroups; // x8

  v2 = this;
  if ( (byte_4C41BD8 & 1) == 0 )
  {
    this = (TitleInfoEventItemControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    byte_4C41BD8 = 1;
  }
  mEventInfoGroups = v2->fields.mEventInfoGroups;
  if ( !mEventInfoGroups )
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3

  this->fields.mEventInfoGroups = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEventInfoGroups, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields.onChangedEventGroup = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onChangedEventGroup, (int32_t)value, (int32_t)method, v3);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *oldEventInfoGroups_5__2; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x0
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  _BOOL8 v18; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x0
  System_Collections_Generic_List_object__o *mEventInfoGroups; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *v24; // x8
  int32_t v25; // w2
  int v26; // w9
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x19
  Il2CppObject **p__2__current; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C41BDA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C41BDA = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        oldEventInfoGroups_5__2,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
      v34 = v33;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
        if ( !v18 )
          break;
        current = v34.fields._current;
        if ( !v34.fields._current )
          sub_1C372B4(v18);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34.fields._current, 0);
        if ( !gameObject )
          sub_1C372B4(0);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        if ( !_4__this )
          sub_1C372B4(v21);
        mEventInfoGroups = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
        if ( !mEventInfoGroups )
          sub_1C372B4(0);
        System_Collections_Generic_List_object___Remove(
          mEventInfoGroups,
          current,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Remove__);
        v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(v23, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
      if ( !_4__this )
        goto LABEL_43;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__First_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.mEventInfoGroups,
                                                                               (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_TitleInfoEventInfoComponent___);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_43;
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)oldEventInfoGroups_5__2,
                                                                               0);
      if ( !oldEventInfoGroups_5__2 )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)oldEventInfoGroups_5__2, 1, 0);
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_TitleInfoEventInfoComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent___ctor__);
    this->fields._oldEventInfoGroups_5__2 = (struct System_Collections_Generic_List_TitleInfoEventInfoComponent__o *)v5;
    p_oldEventInfoGroups_5__2 = &this->fields._oldEventInfoGroups_5__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._oldEventInfoGroups_5__2, (int32_t)v5, v7, v8);
    if ( _4__this )
    {
      oldEventInfoGroups_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.mEventInfoGroups;
      if ( oldEventInfoGroups_5__2 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v33,
          oldEventInfoGroups_5__2,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
        v34 = v33;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v34,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
        {
          v12 = (System_Collections_Generic_List_object__o *)*p_oldEventInfoGroups_5__2;
          if ( !*p_oldEventInfoGroups_5__2 )
            sub_1C372B4(0);
          v13 = v34.fields._current;
          items = v12->fields._items;
          v15 = Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C372B4(v12);
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v13,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v10, v11);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v34,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
        v24 = _4__this->fields.mEventInfoGroups;
        if ( v24 )
        {
          v25 = v24->fields._size;
          v26 = v24->fields._version + 1;
          v24->fields._size = 0;
          v24->fields._version = v26;
          if ( v25 >= 1 )
            System_Array__Clear((System_Array_o *)v24->fields._items, 0, v25, 0);
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
              v27 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v27,
                (Il2CppObject *)_4__this,
                Method_TitleInfoEventItemControl__DelayedDestroy_b__41_0__,
                0);
              v28 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v28, v27, 0);
              this->fields.__2__current = (Il2CppObject *)v28;
              p__2__current = &this->fields.__2__current;
              sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v28, v30, v31);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C372B4(oldEventInfoGroups_5__2);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TitleInfoEventItemControl__DelayedDestroy_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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